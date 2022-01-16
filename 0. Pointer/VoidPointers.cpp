#include<bits/stdc++.h>
using namespace std;

// void printNumber(int* numberPtr){
//     cout <<*numberPtr << endl;
// }

// int main(){
//     int num = 5;
//     printNumber(&num);

//     return 0;


// int main(){
//     int i =5;

//     int *q =&i;
//     cout<< q <<endl; // 0x61ff04
//     cout << *q <<endl; // 5

//     int *p = 0; // null pointer
//     p = &i;

//     cout<< p <<endl; // 0x61ff04
//     cout<< *p <<endl; // 5

// }

int main(){
int num = 5;
int a = num;
cout << "a before - "<<num << endl; //5
a++;
cout << "a after - "<<num << endl; //5

int *p = &num;
cout << "before " <<num<<endl;
(*p)++;
cout <<  "after " <<num<<endl;

}