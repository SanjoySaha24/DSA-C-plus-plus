#include<bits/stdc++.h>
using namespace std;

int main(int n){
    int fact =1;
    for(int i=0; i<=n; i++){
        fact = fact*i;
        cout<<fact;
    }
}