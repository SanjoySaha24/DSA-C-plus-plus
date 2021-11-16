#include<bits/stdc++.h>
using namespace std;

int getSum(int n){
    if(n==0)
        return 0;
        return getSum(n-1)+n;
}
int main(){
    int n;
      cout << "Enter value of n - ";
    cin >> n;
    cout <<"The sum of natural no. is :- "<< getSum(n);
}