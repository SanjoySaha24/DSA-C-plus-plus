#include <bits/stdc++.h>
using namespace std;

int remZero(int arr[], int n)
{
    int count =0;
    
    for(int i = 0; i<n; i++){
        if(arr[i]!=0){
            swap(arr[i],arr[count]);
            count++;
        }
    }
}

int main()
{
    int arr[] = {10, 0,0, 0, 30, 30}, n = 6;

    cout << "Before Removal" << endl;

    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    cout << endl;

    n = remZero(arr, n);

    cout << "After Removal" << endl;

    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}