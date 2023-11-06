//If And Else Statements

#include<iostream>
using namespace std;

int main(){
    int age, vage;
    age = 25;
    vage = 18;
    if(age >= vage){
        cout<< "Old enough to vote!";
    }
    else{
        cout<<"Not old enough to vote.";
    }
    return 0;
}