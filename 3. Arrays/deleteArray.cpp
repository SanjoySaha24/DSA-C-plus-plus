// Q. Program to delete a no. from the array.

#include <bits/stdc++.h>
using namespace std;

int deleteEle(int arr[], int n, int x)
{
    int i = 0;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == x)
            break;
    }

    if (i == n)  // reached at end
        return n;

    for (int j = i; j < n - 1; j++) // c0pies element from i to j
    {
        arr[j] = arr[j + 1];
    }

    return n - 1;
}

// user input //
int main()
{
    int n;
    cout << "Enter value of n - ";
    cin >> n;
    int arr[n];

    cout << "Enter values in array" << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int x;
    cout<<"Enter value to be deleted : ";
    cin>>x;

    cout << "Before Deletion" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    n = deleteEle(arr, n, x);

    cout << "After Deletion" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

// direct input
// int main() {

//        int arr[] = {3, 8, 12, 5, 6}, x = 12, n = 5;

//        cout<<"Before Deletion"<<endl;

//        for(int i=0; i < n; i++)
//        {
//        	cout<<arr[i]<<" ";
//        }

//        cout<<endl;

//        n = deleteEle(arr, n, x);

//        cout<<"After Deletion"<<endl;

//        for(int i=0; i < n; i++)
//        {
//        		cout<<arr[i]<<" ";
//        }

// }