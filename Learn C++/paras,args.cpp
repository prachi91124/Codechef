//Parameters, Arguments

#include <iostream>
using namespace std;

// Define the greet function
void greet(string name) {
    cout << "Hello, " << name << "!" << endl;
}

int main() {
    // Define the name variable and call the greet function
    string name = "Alice";
    greet(name);
    
    return 0;
}