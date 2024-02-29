#include <iostream>
#include <vector>
#include <fstream>
#include <string>

using namespace std;

int main(){
    while(true){
        int res;
        cout << "Press 1 if you want to check ur inbox ..." << '\n' << "Press 2 if you want to to send email in global chat ..." << endl;
        cin >> res;
        if(res == 1){
            FILE *fp;
            fp = fopen("message.txt", "r");
            char txt[10000];
            fscanf(fp, "%s", txt);
            cout << txt << endl;
            fclose(fp);
        }
        else if(res==2){
            int AIJAIJIJAIJ;
            FILE *fp;
            char buffer[10000];
            cin >> buffer;
            fp = fopen("message.txt","w");
            AIJAIJIJAIJ = fwrite(buffer,sizeof(buffer),1,fp);
            fclose(fp);
        }
        else{
            cout << "there was an error ..." << endl;
        }

    }
    return 0;
}
