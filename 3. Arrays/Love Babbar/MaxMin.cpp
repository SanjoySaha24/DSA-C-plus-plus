// https://www.youtube.com/watch?v=sNrLlmOIn-c&list=PLDzeHZWIZsTryvtXdMr6rPh4IDexB5NIA&index=9

#include<bits/stdc++.h>
using namespace std;

int getMax(int num[], int n){
    int max = INT_MIN;
    for(int i=0; i<n; i++){
        if(num[i]> max){
            max = num[i];
        }
    }
    return max;
    }
int getMin(int num[], int n){
    int min = INT_MAX;
    for(int i=0; i<n; i++){
        if(num[i]< min){
            min = num[i];
        }
    }
    return min;
}
    int main(){
        int size;
        cin >> size;
    int n;
        int num[100];
        for(int i=0; i<size; i++){
            cin >> num[i];
        }
    cout<<"max val" << getMax(num,size) <<endl;
    cout<<"min val" << getMin(num,size) <<endl;
}