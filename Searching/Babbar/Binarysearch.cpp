#include<bits/stdc++.h>
using namespace std;

int binsearch(int arr[], int n, int x){
    int start = 0, end = n-1;

    while(start <= end){
        int mid = start+(end-start)/2;

            if(arr[mid]==x)
            return mid;

            else if(arr[mid]>x)
            end = mid-1;

            else
                start = mid+1;
    }
    return -1;
}
int main(){

    int n;
    cout<<"Enter size of array - ";
    cin>>n;

    cout<<"Enter the elements - ";
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int x;
    cout<<"Enter item to search - ";
    cin>>x;

    cout<<"The element is present at - "<<binsearch(arr,n,x);
    
}