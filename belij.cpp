#include <iostream>
#include <vector>
#include <fstream>
#include <string>

using namespace std;

int main(){
    while(true){
        char name[1000] = "Belij";
        int res;
        cout << "Press 1 if you want to check ur inbox ..." << '\n' << "Press 2 if you want to to send email to a direct user ..." << endl;
        cin >> res;
        if(res == 1){
            FILE *fp;
            fp = fopen("message.txt", "r");
            char txt[10000];
            fgets(txt, sizeof(txt), fp);
            fclose(fp);
            char checker;
            for(int i=3; i<sizeof(txt)/sizeof(txt[0]); i++){
                if(txt[i-1]==' ' && txt[i-2]=='o' && txt[i-3]=='t'){
                    checker = txt[i];
                    break;
                }
            }
            if(checker==name[0]){
                cout << "Context: " << txt << endl;
            }
            else{
                cout << "There is no messages for you" << endl;
            }
        }
        else if(res==2){
            char adress[10000];
            cout << "Who will be a receiver: " << endl;
            cin >> adress;
            FILE *fp;
            char buffer[10000];
            cin >> buffer;
            fp = fopen("message.txt","w");
            fprintf(fp, "%s to %s:  %s", name, adress, buffer);
            fclose(fp);
        }
        else{
            cout << "there was an error ..." << endl;
        }

    }
    return 0;
}
