// Functions ~ Modularise code,
// increase readability , 
// use same code multiple times
// void -> does not returns anything

// #include<bits/stdc++.h>
// using namespace std;

// void printName(string name){
//     cout<<"HEllo World "<< name;
// }
// int main(){
//     string name;
//     cout<<"Enter name ~ ";
//     cin >>name;
//     printName(name);

//     string name2;
//     cout<<"Enter name ~ ";
//     cin>>name2;
//     printName(name2);
//}
// OUTPUT --
// Enter name ~ Ram
// HEllo World RamEnter name ~ Lam
// HEllo World Lam
//---------------------------------------------

// SUM
#include<bits/stdc++.h>
using namespace std;

int sum(int num1, int num2){
    int num3= num1 + num2;
    return num3;
}
int main(){
    int num1, num2;
    cin >> num1 >> num2;
    int res = sum(num1,num2);
    cout<<res;
}

// PASS BY VALUE
// void value(int num){
//     cout<<num<<endl;
//     num+=5;
//     cout<<num<<endl;
//     num+=5;
//     cout<<num<<endl;
// }
// int main(){
//     int num=10;
//     value(num); copy is passed
//     cout<<num<<endl; no change in original value
//     }
// OUTPUT ~ 10 15 20 10


// PASS BY REFERENCE
// void value(int &num){
//     cout<<num<<endl;
//     num+=5;
//     cout<<num<<endl;
//     num+=5;
//     cout<<num<<endl;
// }
// int main(){
//     int num=10;
//     value(num); Actual value passed
//     cout<<num<<endl; 
//    }
// OUTPUT ~ 10 15 20 20