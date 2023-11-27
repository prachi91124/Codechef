//USer Defined Functions

#include <iostream>
using namespace std;

void print(int x){
    // int x;
    for(int i = 1; i <= x; i++){
        cout<<" "<<i;
    }
    // cout<<endl;
    // return 0;    
}

int main(){
    int a, b;
    cin >> a >> b;
    // int result1 = print(a);
    // int result2 = print(b);
    print(a);
    cout<<endl;
    print(b);
    return 0;
}