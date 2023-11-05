//Candy Store

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x, y;
	    cin>>x>>y;
	    int amt = y;
	    if(y > x){
	        amt += (y-x);
	    }
	    cout<<amt<<endl;
	}
	return 0;
}