#include<bits/stdc++.h>
using namespace std;

// int main(){
//     int t; // test cases
//     cin >> t;
//     while(t--){
//     int n;
//     cin >> n;
//     int digitsum=0;
//     while(n>0){
//         int lastdigit = n%10;
//         digitsum = digitsum+lastdigit;
//         n= n/10;

//     }
//     cout<< digitsum<<endl;
// }
// }

// Using FUNCTIONS
int sum(int a, int b){
    int result = a+b;
    return result;
}

int main(){
    int n;
    cout<<"Enter the digit : ";
    cin>>n;
    int digit_sum = 0;
    while(n){
        digit_sum = digit_sum+n%10;
        n=n/10;
    }
    cout<<"The digit sum is : "<<digit_sum;
}