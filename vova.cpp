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
            string txt;
            cout << txt << endl;
        }
        else if(res==2){
            int AIJAIJIJAIJ;
            FILE *fp;
            char buffer[] = "Writing to a file using fwrite.";

            fp = fopen("message.txt","w");
            AIJAIJIJAIJ = fwrite(buffer,sizeof(buffer),1,fp);
            
        }
        else{
            cout << "there was an error ..." << endl;
        }

    }
    return 0;
}
