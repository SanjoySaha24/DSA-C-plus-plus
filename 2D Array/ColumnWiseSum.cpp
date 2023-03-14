#include<bits/stdc++.h>
using namespace std;

bool isPresent(int arr[][3], int target, int i, int j ){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j]==target){
                return 1;
            }
        }
    }
        return 0;
}
// to print column wise sum
void printColSum(int arr[][3],int i, int j){
    cout<<"Priting Sum - "<<endl;
        for(int j=0; j<3; j++){
            int sum=0;
            for(int i=0; i<3;i++){
                sum = sum+arr[i][j];
            }
            cout<< sum << " ";
        }
    cout<<endl;
}

int main(){
    // create 2d array
    int arr[3][3];
    //take input j wise
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>> arr[i][j];
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<< arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Enter element to be searched - "<<endl;
    int target;
    cin>>target;

    if(isPresent(arr,target,3,3)){
        cout<<"Element found "<<endl;
    }
    else{
        cout<<"Not found"<<endl;
    }
    printColSum(arr, 3 ,3);
}