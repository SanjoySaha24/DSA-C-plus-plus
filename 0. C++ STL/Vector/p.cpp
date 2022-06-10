// https://www.youtube.com/watch?v=udExMlaR_nA&list=PLauivoElc3gh3RCiQA82MDI-gJfXQQVnn&index=2&t=171s

#include<bits/stdc++.h>
using namespace std;

int main(){
    // pair<int,string>p;
    // p=make_pair(2,"abc");
    // p= {2, "abc"};
    // pair<int, string> &p1=p;
    // p1.first=4;
    // p1.second="fff";
    // cout<<p.first<<" "<<p.second<<endl;
    
    pair<int,int>p_array[3];
    p_array[0]={1,2};
    p_array[1]={2,3};
    p_array[2]={3,4};
    for(int i=0; i<3; i++){
        cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
    }
}