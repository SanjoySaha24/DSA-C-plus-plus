#include<bits/stdc++.h>
using namespace std;

int findMajority(int arr[], int n){
    int res =0, count =1;

    for(int i=1; i<n ; i++){
        if(arr[res]==arr[i])
        count++;
        else
        count--;
        if(count ==0){
            res=i;
            count=1;
        }
    }
    count = 0;
    for(int i=0; i<n; i++)
        if(arr[res]== arr[i])
            count++;
        if(count <= n/2)
            res = -1;

            return res;
}

    int main() {
	
      int arr[] = {8,8,6,6,6,4,6}, n = 7;

      cout<<findMajority(arr, n);
    }

    //Leetcode
        // 169. Majority Element

//     class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//         int count =0;
//         int candidate =0;
        
//         for(int num : nums){
//             if(count == 0){
//                 candidate = num;
//         }
//         if(num==candidate)
//             count = count+1;
//         else 
//             count = count -1;
//         }
//         return candidate;
        
//     }
// };