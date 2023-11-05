//Seven Rings

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n, x;
	    cin>>n>>x;
	    int amt = n*x; 
	    if(amt >= 10000 && amt <= 99999){
	        cout<<"Yes"<<endl;
	    }
	    else{
	        cout<<"No"<<endl;
	    }
	}
	return 0;
}