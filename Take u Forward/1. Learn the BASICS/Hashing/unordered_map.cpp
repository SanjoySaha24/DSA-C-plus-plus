// Using map stl
// it stores key value pairs in SORTED PAIR

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
    //pre-compute
    unordered_map<int, int>mpp;
    for(int i=0; i<n; i++){
        mpp[arr[i]]++;
    }

    // ITERATOR used to show it stores key value pairs in SORTED PAIR
    for(auto it : mpp){
        cout<<it.first << "->" << it.second <<endl;
    }

    int q;
    cin>>q;
    while(q--){
        int number;
        cin>>number;
        // fetch
        cout<< mpp[number]<<endl;
    }
    return 0;
}