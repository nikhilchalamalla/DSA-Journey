#include<bits/stdc++.h>
using namespace std;

int main() {
    int age;
    cin >> age;

    if(age > 57) {
        cout << "retirement time" << endl;
    } else if (age >= 55 &&  age <= 57) {
        cout << "eligible for job, but retirement soon."<< endl;
    } else if(age >= 18 && age < 55) {
        cout << "eligible for job." << endl;
    } else {
        cout << "not eligible for job." << endl;
    }
    return 0;
}