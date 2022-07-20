#include<bits/stdc++.h>
using namespace std;
int main(){
    //creation
    map<string,int> m;
    
    //insertion 1
    pair<string,int> p = make_pair("sanjoy",4);
    m.insert(p);

    // 2
    pair<string,int>pair2("joy",5);
    m.insert(pair2);

    //3
    m["mera"] = 1;

    // updation
    m["mera"] = 2;

    // search
    cout<<m["mera"]<<endl;
    cout<<m.at("sanjoy")<<endl;

    cout<<m["unknownKey"]<<endl;
    cout<<m.at("unknownKey")<<endl;

    // size
    cout<<m.size()<<endl;

    // to check presence
    cout<<m.count("love")<<endl;

    //erase
    m.erase("sanjoy");
    cout<<m.size();

    // iterator
    map<string,int> :: iterator it = m.begin();

    while(it != m.end()){
        cout<< it->first << " " << it->second <<endl;
        it++;
    }
}
