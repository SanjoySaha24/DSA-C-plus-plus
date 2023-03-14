#include<iostream>
using namespace std;

void OnetoN(int n){
    if(n==0)
    return;
   
    OnetoN(n-1);
     cout<<n<<endl;
}

int main(){
    int n=4;
    OnetoN(n);
    return 0;

}