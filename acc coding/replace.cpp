// https://www.youtube.com/watch?v=5330ZTDlHXY&t=392s&ab_channel=Campusmonk-ByRachitRastogi

#include <bits/stdc++.h>
using namespace std;

string fun(string s, char ch1, char ch2){
    if(s==""){
        return "";
    }
    else if(ch1 == ch2){
        return s;
    }
    for(int i = 0; i < s.size(); i++){
        if(s[i] == ch1){
            s[i] = ch2;
        }
        else if
            (s[i] == ch2){
                s[i] = ch1;
            }
        }
    return s;
}
int main(){
    string s;
    cin >> s;
    char ch1,ch2;
    cin >> ch1 >> ch2;
    string ans = fun(s, ch1, ch2);

    cout << ans;

    return 0;
}
