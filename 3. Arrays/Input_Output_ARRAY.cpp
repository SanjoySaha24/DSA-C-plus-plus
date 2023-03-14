#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[5];
    cout<<"Enter values in array"<<endl;

    for(int i=0; i<5; i++){
        cin>>arr[i];
    }
    cout<<"You entered these values in array"<<endl;

    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
