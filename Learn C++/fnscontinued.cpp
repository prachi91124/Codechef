//Functions Continued

#include<iostream>
using namespace std;

int calcC(int a, int b){
    return a*a + 2*a*b + b*b;
}
int calcD(int a, int b){
    return a + b;
}

int main(){
    for(int i = 0; i<3; i++){
        int a,b;
        cin>>a>>b;
        int c = calcC(a,b);
        int d = calcD(a,b);

        cout<<c<<endl;
        cout<<d<<endl;
    }
    return 0;
}