#include<bits/stdc++.h>
using namespace std;

void func(){
    cout<<"GFG"<<endl;
     func();
}
int main(){
    func();
}

// Output:-
// GFG
// GFG 
// .
// ..
// .....
// segmentation fault 