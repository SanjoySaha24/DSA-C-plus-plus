#include<bits/stdc++.h>
using namespace std;

void f(int i, int n){
    if(i>n)
        return;
    cout<<"Raj "<<endl;
    f(i+1, n);
}

int main(){
    int n;
    cout<<"Enter value of n : ";
    cin>>n;
    f(1,n);
}