#include<bits/stdc++.h>
using namespace std;

void print_vec(vector<int> v){
    cout<<"size : "<< v.size()<<endl;
    for(int i =0; i< v.size(); i++){
        cout<<v[i]<<" ";
    }
}

int main(){
    vector<int>v(5, 3);
    v.push_back(5);
    v.pop_back();

    print_vec(v);

    vector<int>v2 = v;
    print_vec(v2);
    // vector<int>v;
    // int n;
    // cin>>n;
    // for(int i=0; i<n; i++){
    //     int x;
    //     cin>>x;
    //     v.push_back(x);
    // }
    // print_vec(v);
}