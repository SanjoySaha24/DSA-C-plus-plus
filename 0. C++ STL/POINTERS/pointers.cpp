// & - address

#include<bits/stdc++.h>
using namespace std;

int main(){
  int n = 5;
  int *ptr = &n; // pointer storing address

  cout << n <<endl; // usual output
  cout << &n <<endl; // address
  cout << ptr <<endl; // prints address stored by pointer
  cout << *ptr <<endl; // prints 5 as it is stored

  *ptr  = 10;
  cout << *ptr <<endl; // prints 10 as new value assigned to *ptr
  cout << n <<endl; // prints 10


  int v;
  int *ptr2 = &v;
  *ptr2 = 7;
  cout << "v=" << v <<endl; // v = 7
}