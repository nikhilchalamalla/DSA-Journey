#include<bits/stdc++.h>
using namespace std;

//Void Function to print name
/* void printName() {
    cout << "Hello, Nikhil!" << endl;
}

int main() {
    printName();
    return 0;
} */

void printName(string name) {
    cout << "Hello, " << name << "!" << endl;
}

int main() {
    string name;
    cin >> name;
    printName(name);
    // Alternatively, you can directly call the function with a name:
    // printName("Nikhil");

    string name2;
    cin >> name2;
    printName(name2);
    return 0;
}