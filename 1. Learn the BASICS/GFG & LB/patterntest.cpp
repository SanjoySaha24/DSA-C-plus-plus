#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int test =0; test < t; ++test){
        int n;
        cin >> n;
        for(int i=1; i<=n ; ++i){
            for(int j=1; j<=i; ++j){
                cout <<"*";
            }
        cout << endl;
        }

    }
}
