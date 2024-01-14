// Algorithms using vectors
#include<bits/stdc++.h>
using namespace std;
int main()
{
// Vector input output
	int n;
	cin>>n;
	vector<int>v(n);
	for(int i=0; i<n; i++){
		cin>>v[i];
	}
	// for(int i=0; i<n; i++){
	// 	cout<<v[i]<<" ";
	// }

	//find min element
	int min = *min_element(v.begin(), v.end());
	cout<<min<<endl;

	//find max element
	int max = *max_element(v.begin(), v.end());
	cout<<max<<endl;

	// find sum
	int sum = accumulate(v.begin(), v.end(),0);
	cout<<sum<<endl;

	// count no.
	int ct = count(v.begin(), v.end(),3);
	cout<<ct<<endl;

	// find no.
	auto it = find(v.begin(), v.end(), 10);
	if(it!= v.end())
		cout<<*it<<endl;
	else
		cout<<"Element not found";
	
	// reverse number
	reverse(v.begin(), v.end());
	for(auto val : v){
		cout<<val<<" ";
	}
	cout<<endl;

	// reverse string
	string s = "abcdsfdsjf";
	reverse(s.begin(), s.end());
	cout<<s<<endl;
}