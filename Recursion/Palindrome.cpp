#include<bits/stdc++.h>
using namespace std;

bool palindrome(string str, int start, int end){
    if(start >= end)
        return true;

        return((str[start] == str[end]) &&
        palindrome(str, start+1, end-1)); 
}
int main(){
    string s = "bob";
    printf("%s", palindrome(s,0,s.length() - 1) ? "true" : "false");

    return 0;
}