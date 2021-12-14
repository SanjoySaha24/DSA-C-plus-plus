#include <iostream>
#include<algorithm>
using namespace std;

using namespace std;
int main(){
    int arr[] = {100,89820,300,40};
    int n= sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr+n);

    for(int x: arr)
    cout<<x<<" ";
    // --> 40 100 300 89820 

    sort(arr,arr+n,greater<int>());
    // greater function gives decreasing order
	
	cout<<endl;
	for(int x: arr)
	    cout<<x<<" ";
    // --> 89820 300 100 40 
}