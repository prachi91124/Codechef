//Variable Scope

#include <iostream>
using namespace std;

int globalVar = 10;

void displayScopes(){
    int localVar = 20;
    cout << localVar <<endl;
    cout << globalVar <<endl;
}

int main(){
    displayScopes();
    return 0;
}