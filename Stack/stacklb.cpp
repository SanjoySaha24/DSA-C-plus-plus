#include<bits/stdc++.h>
using namespace std;

int main(){
    //create stack
    stack<int> s;

    s.push(2);
    s.push(3);

    s.pop();

    cout<<"Printing top element : "<<s.top()<<endl;

    if(s.empty()){
        cout<<"Stack empty"<<endl;
    }
    else{
        cout<<"Stack not empty"<<endl;
    }
}