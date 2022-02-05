// incase we have define size of array

#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> a(5,1); // 5 refers no.s , 1 is assigned by 5.
        
    cout<<"print a"<<endl;
    for(int i:a){
        cout<<i<<" ";
    }cout<<endl;
    
    vector<int> last(a); // copying value from above array
    cout<<"print last"<<endl;
    for(int i:a){
        cout<<i<<" ";
    }cout<<endl;
}