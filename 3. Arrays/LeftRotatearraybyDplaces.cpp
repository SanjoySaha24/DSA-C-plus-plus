#include <bits/stdc++.h>
using namespace std;

// EFFICIENT METHOD
void leftRotate(int arr[], int d, int n)
{
	int temp[d];

	for(int i = 0; i  < d; i++)
	{
		temp[i] = arr[i];
	}

	for(int i = d; i  < n; i++)
	{
		arr[i - d] = arr[i];
	}

	for(int i = 0; i  < d; i++)
	{
		arr[n - d + i] = temp[i];
	}	
}

// OR USING

// REVERSAL METHOD
// ---------------------------------------

// void reverse(int arr[], int low, int high)
// {
// 	while(low < high)
// 	{
// 		swap(arr[high], arr[low]);

// 		low++;
// 		high--;
// 	}
// }   

// void leftRotate(int arr[], int d, int n)
// {
// 	reverse(arr, 0, d - 1);

// 	reverse(arr, d, n - 1);

// 	reverse(arr, 0, n - 1);
// }

// ---------------------------------------

    
int main() {
	
      int arr[] = {1, 2, 3, 4, 5}, n = 5, d = 2;

      cout<<"Before Rotation"<<endl;

       for(int i = 0; i < n; i++)
       {
       		cout<<arr[i]<<" ";
       }

       cout<<endl;

       leftRotate(arr, d, n);

       cout<<"After Rotation"<<endl;

       for(int i = 0; i < n; i++)
       {
       		cout<<arr[i]<<" ";
       }
    
}