#include<iostream>
using namespace std;

int main() {

    //int data types
    /* int x = 10;
    long y = 15;
    long long z = 187890987634;

    cout << "value of int x is: " << x << endl;
    cout << "value of long y is: " << y << endl;
    cout << "value of long long z is: " <<  z << endl; */

    //float, double data types
    /* float x = 5.6;
    float y = 5;
    double z = 3.14;

    cout << "Value of float x is: " << x << endl;
    cout << "Value of float y is: " << y << endl; //it can print int values as well.
    cout << "Value of double z is: " << z << endl; */

    //string and getline
    /* string s1;
    cin >> s1; //hey Nikhil
    cout << s1 ; //output hey -> if we are saying string it only picks up anything before the space, after the space it won't print that one.
    return 0; */

    //To Overcome above problem this is the solution.
    /* string s1, s2;
    cin >> s1 >> s2;
    cout << s1 << " " << s2 ;
    return 0; */

    //another way
    string str;
    getline(cin, str);
    cout << str; 

    //char
    /* char ch;
    cin >> ch;
    cout << ch; */

    char ch = 'a';
    cout << ch;
    return 0;
}