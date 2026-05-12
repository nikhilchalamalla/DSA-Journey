#include<bits/stdc++.h>
using namespace std;

int main() {
    
    int age;
    cin >> age;
    if(age >= 18) {
        cout << "You are an adult.";
    } 
    else if(age >= 13) {
        cout << "You are a teenager.";
    }
    else {
        cout << "You are a child.";
    }

    return 0;
}