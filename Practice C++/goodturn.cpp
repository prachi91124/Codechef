//Good Turn

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i = 0; i < t; i++){
	    int x, y;
	    cin>>x>>y;
	    int sum = x + y;
	    if(sum > 6){
	        cout<<"yes"<<endl;
	    }
	    else{
	        cout<<"no"<<endl;
	    }
	}
	return 0;
}