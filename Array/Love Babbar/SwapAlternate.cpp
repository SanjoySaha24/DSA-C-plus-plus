#include<bits/stdc++.h>
using namespace std;

void swapAlternate(int arr[], int n){
    for(int i=0; i<n; i+=2){
        if(i+1 < n){
            swap(arr[i],arr[i+1]);
        }
    }
}

int main(){

    int n;
    cout<<"Enter value of n - ";
    cin>>n;

    int arr[n];
    cout << "Enter values in array : ";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout<<endl;

    cout<<"Before swap : "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<<" ";
    }
    cout<<endl;
    cout<<"After swap : "<<endl;

    swapAlternate(arr,n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}