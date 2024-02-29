#include <iostream>
#include <vector>
#include <fstream>
#include <string>

using namespace std;

int main(){
    while(true){
        char name[1000] = "Vova";
        int res;
        cout << "Press 1 if you want to check ur inbox ..." << '\n' << "Press 2 if you want to to send email in global chat ..." << endl;
        cin >> res;
        if(res == 1){
            FILE *fp;
            fp = fopen("message.txt", "r");
            char txt[10000];
            fscanf(fp, "%s", txt);
            cout << "Your message is: " << txt << endl;
            fclose(fp);
        }
        else if(res==2){
            FILE *fp;
            char buffer[10000];
            cin >> buffer;
            fp = fopen("message.txt","w");
            fprintf(fp, "%s %s", name, buffer);
            fclose(fp);
        }
        else{
            cout << "there was an error ..." << endl;
        }

    }
    return 0;
}
