//Chef And Happy String

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t, v=0;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;

	    for(int i=0; i<s.size(); i++){
	        if(s[i]=='a' || s[i]=='e' || s[i]=='o'||s[i]=='i'||s[i]=='u'){
	            v++;
	            if(v==3){
	                cout<<"Happy"<<endl;
	                break;
	            }
	        }
	        else v=0;
	    }
	    if(v!=3){
	        cout<<"Sad"<<endl;
	    }
	}
	return 0;
}