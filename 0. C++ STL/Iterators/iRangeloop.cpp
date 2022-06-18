// https://www.youtube.com/watch?v=xiXMmOSDX3U&list=PLauivoElc3gh3RCiQA82MDI-gJfXQQVnn&index=5

#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<pair<int,int> > v_p = {{1,2}, {2,3}};
    for(pair<int,int> &value: v_p){
        cout<< value.first << " "<< value.second<<endl;
    }
    cout<< endl;
}