//Pizza Cutting

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int  t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    if(n%2==0 || n==1){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}