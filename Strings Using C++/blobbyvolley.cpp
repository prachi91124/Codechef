//Blobby Volley Scores

#include <iostream>
using namespace std;

int main(){
    int T;
    cin >> T;
    
    while(T--){
        int n;      //number of turns = n
        cin >> n;
        string s;
        cin >> s;
        int alice = 0, bob = 0;
        char server='A';
        for(int i = 0; i<n; i++){
            if(server == 'A'){
                if(s[i]== 'A'){
                    alice++;
                }
                else{
                    server = 'B';
                }
            }
            else{
                if(s[i]=='B'){
                    bob++;
                }
                else{
                    server = 'A';
                }
            }
            
        }
        cout<<alice<<" "<<bob<<endl;
        
            
    }
    return 0;
}