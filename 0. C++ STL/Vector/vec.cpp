// https://www.youtube.com/watch?v=udExMlaR_nA&list=PLauivoElc3gh3RCiQA82MDI-gJfXQQVnn&index=2&t=171s

#include<bits/stdc++.h>
using namespace std;

void printVec(vector<int> v){
    cout<<"size: "<<v.size()<<endl;
    for(int i=0; i<v.size(); i++){
        cout<< v[i]<<" ";
    }
    cout<< endl;
}
// int main(){
    //     vector<int> v;
//     int n;
//     cin >>n;
//     for(int i=0; i <n; i++){
//         int x;
//         cin >> x;
//         v.push_back(x);
//     }
//     printVec(v);
// }
int main(){
    vector<int> v;
    v.push_back(7);
    v.push_back(6);

    vector<int> v2 = v;
    v2.push_back(5);
    printVec(v);
    printVec(v2);
}
