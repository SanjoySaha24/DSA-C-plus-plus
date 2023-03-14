#include<bits/stdc++.h>
using namespace std;

int main(){
// * Program to check someone is adult or not
    // int age;
    // cin >> age;
    // if(age>=18){
    //     cout<<"You are an adult";
    // }
    // else{
    //     cout<<"You are not an adult";
    // }

// * Grade 
int marks;
cin>>marks;
if(marks<25){
    cout<<"F";
}
else if(marks<=44){
    cout<<"E";
}
else if(marks<=49){
    cout<<"D";
}
else if(marks<=59){
    cout<<"C";
}
else if(marks<=79){
    cout<<"B";
}
else if(marks<=100){
    cout<<"A";
} 
return 0;
}