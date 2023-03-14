#include<bits/stdc++.h>
using namespace std;

int main(){

    //declare
    int number[15];

    //accessing an array
    cout<<"Value at 14 index "<< number[14]<<endl;

    // cout<< "Value at 20 index " << number[20] << endl;

    //initialising an array
    int second[3] = {5,7,11};

    //accessing an element
    cout << "Value at 2 index " <<second[2]<<endl;

    int third[15] = {2,7};

    int n =15;
    cout << "Printing the array " <<endl;
    // print the array

    for(int i=0; i<n;i++){
        cout<< third[i] << " ";
    }

    // initializing all locations with 0
    int fourth[10] = {0};

    n=10;
    cout << "Printing the array " <<endl;
    // print the array
    for(int i=0; i<n;i++){
        cout<< fourth[i] << " ";
    }

    cout<< endl << "Everything is fine" << endl << endl;

    return 0;

}