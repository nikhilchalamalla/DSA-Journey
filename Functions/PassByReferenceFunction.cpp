#include<bits/stdc++.h>
using namespace std;

/* void doSomething(string &str) {
    str[0] = 't'; // This change will affect the original string in the main function.
    cout << "Inside function: " << str << endl; // Output will be "tello", because we are modifying the original string inside the function.
}

int main() {
    string str = "hello";
    cout << "Before function call: " << str << endl; // Output will be "hello", because the original string is not modified before the function call.
    doSomething(str);
    cout << "After function call: " << str << endl; // Output will be "tello", because the original string is modified after the function call, as it was passed by reference to the function.
    return 0;
} */

//Another example of pass by reference function with integer example
void doSomething(int &num) {
    cout << num << endl; // Output will be 10, because the value of num is passed by reference to the function.
    num += 5; // This change will affect the original variable in the main function.
    cout << num << endl; // Output will be 15, because we are modifying the original variable inside the function.
    num += 5; // This change will also affect the original variable in the main function
    cout << "Inside function: " << num << endl; // Output will be 20, because we are modifying the original variable inside the function.
}

int main() {
    int num = 10;
    cout << "Before function call: " << num << endl; // Output will be 10, because the original variable is not modified before the function call.
    doSomething(num);
    cout << "After function call: " << num << endl; // Output will be 20, because the original variable is modified after the function call, as it was passed by reference to the function.
    return 0;
}