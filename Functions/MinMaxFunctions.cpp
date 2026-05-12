#include<bits/stdc++.h>
using namespace std;

int maxx(int num1, int num2) {
    if (num1 > num2) {
        return num1;
    } else {
        return num2;
    }
}

int main() {
    int num1, num2;
    cin >> num1 >> num2;
    int maximum = maxx(num1, num2);
    // int maximum = max(num1, num2); // Alternatively, you can use the built-in max function from the <algorithm> library.
    int minimum = min(num1, num2);
    cout << "Maximum: " << maximum << endl;
    // cout << "Minimum: " << minimum << endl;
    return 0;
}