//Water Consumption

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for( int i = 0; i < t; i++){
	    int x;
	    cin>>x;
	    if(x>=2000){
	        cout<<"yes"<<endl;
	    }
	    else{
	        cout<<"no"<<endl;
	    }
	}
	return 0;
}