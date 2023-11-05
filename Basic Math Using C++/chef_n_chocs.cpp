//Chef And Chocolates

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x, y, z;
	    cin>>x>>y>>z;
	    int money = 5*x + 10*y;
	    cout<< money/z <<endl;
	}
	return 0;
}