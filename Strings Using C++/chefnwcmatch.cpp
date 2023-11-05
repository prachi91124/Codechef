//Chef And The Wildcard Matching

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int equal = 1;
	    string x, y;
	    cin>>x>>y;
	    for(int i = 0; i < x.length(); i++){
	        if(x[i]!=y[i] && (x[i]!='?' && y[i]!='?')){
	            equal = 0;
	            break;
	        }
	    }
	    if(equal){
	        cout<<"Yes"<<endl;
	    }
	    else{
	        cout<<"No"<<endl;
	    }
	   
	}
	return 0;
}
