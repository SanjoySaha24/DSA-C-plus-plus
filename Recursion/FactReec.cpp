#include<bits/stdc++.h>
using namespace std;

int fact (int n){
    if(n==1)
    return;

    return n*fact(n-1);
}
int main(){
    int n=4;
    fact(n);
    return 0;

}