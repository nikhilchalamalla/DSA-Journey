#include<bits/stdc++.h>
using namespace std;

int main() {
    string s = "Nikhil";
    cout << s << endl;
    cout << s[2] << endl;
    cout << s.length() << endl;
    int len = s.size();
    s[len - 1] = 'z';
    cout << s << endl;
    cout << s[len - 1] << endl;
    return 0;
}
