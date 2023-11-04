//Oneful Pairs
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a, b;
	cin>>a>>b;
	int one = a + b + (a*b);
	if(one == 111){
	    cout<<"yes"<<endl;
	}
	else{
	    cout<<"no"<<endl;
	}
	return 0;
}