#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; // test cases
    cin >> t;
    while(t--){
    int n;
    cin >> n;
    int digitsum=0;
    while(n>0){
        int lastdigit = n%10;
        digitsum = digitsum+lastdigit;
        n= n/10;

    }
    cout<< digitsum<<endl;
}
}