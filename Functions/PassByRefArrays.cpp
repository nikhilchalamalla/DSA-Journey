#include<bits/stdc++.h>
using namespace std;

//In Arrays always pass by reference because when we pass an array to a function, we are actually passing the address of the first element of the array. This means that any changes made to the array inside the function will affect the original array in the main function, as both the main function and the called function are referring to the same memory location where the array is stored. Therefore, when we pass an array to a function, we are effectively passing it by reference, allowing us to modify the original array from within the function.
void doSomething(int arr[], int n) {
    arr[0] += 100; // This change will affect the original array in the main function.
    cout << "Value inside function: " << arr[0] << endl; // Output will be the modified value of the first element of the array, because we are modifying the original array inside the function.
}

int main() {
    int n = 5;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    doSomething(arr, n);
    cout << "Value inside int main: " << arr[0] << endl; // Output will be the modified value of the first element of the array, because the original array is modified after the function call, as it was passed by reference to the function.
    return 0;
}