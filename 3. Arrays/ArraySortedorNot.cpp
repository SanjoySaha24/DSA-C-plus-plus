#include <bits/stdc++.h>
using namespace std;

bool isSorted(int arr[], int n)
{
	for(int i = 1; i < n; i++)
	{
	    if(arr[i] < arr[i - 1])
	        return false;
	}

	return true;
} 

    
int main() {
	
      int arr[] = {5, 12, 30, 42, 635}, n = 5;
      
      printf("%s", isSorted(arr, n)? "true": "false");
    
}