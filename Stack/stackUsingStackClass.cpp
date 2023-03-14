#include<bits/stdc++.h>
using namespace std;

class Stack{
    // properties
    public:
        int *arr;
        int top;
        int size;

    // behaviour
    // constructor
    Stack(int size){
        this -> size = size;
        arr = new int [size];
        top =-1;
    }
    void push(int element){
        if(size - top >1){ //if space available
                top++;
                arr[top] = element; // add element
        }
        else{
            cout<<"Stack Overflow"<< endl;
        }
    }

    void pop(){
            if(top >= 0){ // if there is an element
                top--;
            }
            else{
                   cout<<"Stack Underflow"<< endl; 
            }
    }

    int peek(){
        if(top >= 0){ // if there is an element
                return arr[top];    
            }
            else{
                   cout<<"Stack is Empty"<< endl; 
                   return -1;
            }
    }
    bool isEmpty(){
        if(top==-1){
            return true;
        }
        else{
            return false;
        }
    }
};

int main(){
    Stack st(5);

        st.push(22);
        st.push(43);
        st.push(44);
      
        cout<<st.peek()<<endl;
        st.pop();

        cout<<st.peek()<<endl;
        st.pop();

        cout<<st.peek()<<endl;
        st.pop();

        cout<<st.peek()<<endl;

        if(st.isEmpty()){
            cout<<"Stack is Empty"<<endl;
        }
        else{
            cout<<"Stack not Empty"<<endl;
        }
}