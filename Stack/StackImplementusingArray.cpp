#include<bits/stdc++.h>
using namespace std;

struct MyStack{
    int *arr; //dynmic memory allocation
    int cap; //takig input
    int top;

    MyStack(int c){
        cap = c;
        arr = new int [cap];
        top = -1;
    }

    void push(int x){
        if(top == cap-1){
            cout<<"Stack is full"<<endl;
            return;}
        top++;
        arr[top]=x;
        }
    int pop(){
        if(top==-1)
        {
            
        }
    }