#include<iostream>
#include<vector>
using namespace std;
int main(){

    vector<int> v;
    cout<<"Capacity - "<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"Capacity - "<<v.capacity()<<endl;

      v.push_back(2);
    cout<<"Capacity - "<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"Capacity - "<<v.capacity()<<endl;

    cout<<"Size - "<<v.size()<<endl;

     cout<<"Element at 2nd index - "<<v.at(2)<<endl;

         cout<<"First Element - "<<v.front()<<endl;

    cout<<"Last element - "<<v.back()<<endl;

}