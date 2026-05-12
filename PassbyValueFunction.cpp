#include<bits/stdc++.h>
using namespace std;

/* void doSomething(int num) {
    cout << num << endl; // Output will be 10, because the value of num is passed by value to the function.
    num += 5; // This change will not affect the original variable in the main function.
    cout << num << endl; // Output will be 15, because we are modifying the local copy of num inside the function.
    num += 5; // This change will also not affect the original variable in the main function.
    cout << num << endl; // Output will be 20, because we are modifying the local copy of num inside the function.
}

int main() {
    int num = 10;
    doSomething(num);
    cout << num << endl; // Output will be 10, because the value of num is passed by value to the function, and any changes made to it inside the function do not affect the original variable in the main function.
    return 0;
} */

//Another example of pass by value function String example
 void doSomething(string str) {
    str[0] = 't'; // This change will not affect the original string in the main function.
    cout << str << endl; // Output will be "tello", because we are modifying the local copy of str inside the function.
}
    int main() {
    string str = "hello";
    doSomething(str);
    cout << str << endl; // Output will be "hello", because the value of str is passed by value to the function, and any changes made to it inside the function do not affect the original string in the main function.
    return 0;
} 