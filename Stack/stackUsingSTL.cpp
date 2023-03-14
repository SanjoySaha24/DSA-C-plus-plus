#include<bits/stdc++.h>
using namespace std;

int main(){
    stack<int> s;

    //push
    s.push(1);
    s.push(2);

    //pop
    s.pop();

    cout<<"Priniting top element : "<<s.top()<<endl;
    
    if(s.empty()){
        cout<<"Stack is empty"<<endl;
        }
        else{
        cout<<"Stack is not empty"<<endl;
    }
        
        cout<<"size of stack is  = "<<s.size()<<endl;
    }