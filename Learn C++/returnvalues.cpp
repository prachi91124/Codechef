//Return Values
#include <iostream>
using namespace std;

void computeValue(int a, int b) {
    cout << a*a + 2*a*b + b*b<<endl;
    cout<< a + b <<endl;
}

int main() {
    int t = 3;
    for (int i = 0; i < t; i++) {
        int A, B;
        cin >> A >> B;
        computeValue(A, B);
    }
    return 0;
}