#include<bits/stdc++.h>
using namespace std;

int sortArr(vector<int> arr){
    sort(arr.begin(), arr.end());
    return arr[0];
}
int main(){
    vector<int> arr1 = {9,-1,2,5};
    // vector<int> arr2 = {9,-1,2,5,}
    cout<<sortArr(arr1);
}