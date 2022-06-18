// https://www.youtube.com/watch?v=4EDbe3lhHOM&list=PLauivoElc3gh3RCiQA82MDI-gJfXQQVnn&index=4

#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v= {2,3,5,6,7};
    for(int i=0; i< v.size(); i++){
        cout<< v[i]<< " ";
    }
    cout<< endl;
    vector<int> ::iterator it = v.begin(); // syntax for iterator declaration
    for(it = v.begin(); it!=v.end(); it++){
    cout << (*it) <<" ";
}
}