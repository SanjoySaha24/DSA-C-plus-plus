#include<iostream>
using namespace std;

void nTo1(int n){
    if(n==0)
    return;
    cout<<n<<endl;
    nTo1(n-1);
}

int main(){
    int n=4;
    nTo1(n);
    return 0;

}