#include<iostream>
#include<vector>
using namespace std;
int main(){

   vector<int> v;
   cout<<"Capacity - "<<v.capacity()<<endl;// returns space left for element, 
                                          //default space of vector is 0
    
    v.push_back(1); // insert element
    cout<<"Capacity - "<<v.capacity()<<endl;

      v.push_back(2);
    cout<<"Capacity - "<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"Capacity - "<<v.capacity()<<endl;

    cout<<"Size - "<<v.size()<<endl; // size tells how many elements are there in vector

    cout<<"Element at 2nd index - "<<v.at(2)<<endl;

    cout<<"First Element - "<<v.front()<<endl; // returns First Element

    cout<<"Last element - "<<v.back()<<endl; // returns Last element

    cout<<"before pop "<<endl;
    for(int i:v){
      cout<<i<<" ";
    }cout<<endl;

    v.pop_back(); // remove element from back
    cout<<"after pop "<<endl;
    for(int i:v){
      cout<<i<<" ";
    }

    cout<<"Before clear size - "<<v.size()<<endl;
    v.clear(); // clears the array
    cout<<"After clear size - "<<v.size()<<endl;

}