#include<iostream>
using namespace std;

int sumDig(int n){
    if(n<=9)
        return n;
    else
    return sumDig(n/10) + n%10;
}
int main(){
    cout<<sumDig(123);
}