// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     queue<int> q;

//     q.push(11);

//     q.push(15);

//     q.push(13);

//     cout<<"Size of queue is :" << q.size()<<endl;

//     q.pop();
//     q.pop();
//     q.pop();

//     cout<<"Size of queue is :" << q.size()<<endl;

//     if(q.empty()){
//         cout<<"Queue is empty"<<endl;
//     }
//     else{
//         cout<<"Queue is not empty"<<endl;
//     }
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

int main(){
    queue<string> q;
    q.push("abc");
    q.push("bcd");
    q.push("cde");
    q.push("def");
    q.push("ghi");
    while(!q.empty()){
        cout<<q.front()<<endl;
    }
    
}