//Functions In Cpp


#include <iostream>
using namespace std;

int main(){
    int t = 3;
    while(t--){
        int a, b;
        cin>>a>>b;
        cout<<a*a+2*a*b+b*b<<endl;
        cout<<a+b<<endl;
    }
    return 0;
}