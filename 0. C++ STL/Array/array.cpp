#include<iostream>
#include<array>

using namespace std;
int main(){
    
   // int basic[3] = {1,2,3}; // taking input usually

    array<int,4> a = {1,2,3,4}; // stl creating array

    int size = a.size();
    cout<<"The size is - "<<size<<endl; // returns size of array

    for(int i=0; i<size; i++){
        cout<<a[i]<<endl; // returns output of input array
    }

    cout<<"Element at 2nd index - "<<a.at(2)<<endl;

    cout<<"Empty or not - "<<a.empty()<<endl;

    cout<<"First Element - "<<a.front()<<endl;

    cout<<"Last element - "<<a.back()<<endl;

    


       
}