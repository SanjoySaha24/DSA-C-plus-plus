#include<bits/stdc++.h>
using namespace std;

int main(){
    string s = "Striver";
    // cout << s[4]; OUTPUT ~ v
    int len = s.size();
    // cout<<len; OUTPUT ~ 7
    // cout<<s[len-1]; ~ r returns last character
    s[len-1] = 'W'; // replaces last character of string
    cout<<s[len-1];
    return 0;
}