#include<bits/stdc++.h>
using namespace std;

int sum(int num1, int num2) {
    int num3 =num1 + num2;
    return num3;
}

int main() {
    //Instead of like these we can write above one like using the return function.
    int num1, num2;
    cin >> num1 >> num2;
    int res = sum(num1, num2);
    cout << res << endl;
    return 0;
}

//alterntively you can write void also like this
/* void sum(int num1, int num2) {
    int num3 =num1 + num2;
    cout << num3;
} */

/* int main() {
    int num1, num2;
    cin >> num1 >> num2;
    sum(num1, num2); // If you are using void function then you can directly call the function like this and it will print the result inside the function.
    return 0;
} */

