#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int v[n];
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    //find min element
    int min = *min_element(v, v+n);
	cout<<min<<endl;

	//find max element
	int max = *max_element(v, v+n);
	cout<<max<<endl;

    // find sum
	int sum = accumulate(v, v+n,0);
	cout<<sum<<endl;

    //count no.
	int ct = count(v, v+n,3);
	cout<<ct<<endl;

    //find number
	auto it = find(v, v+n, 1);
	if(it!= v+n)
		cout<<*it<<endl;
	else
		cout<<"Element not found"<<endl;
	
	// reverse number
	reverse(v, v+n);
	for(auto val : v){
		cout<<val<<" ";
	}
	cout<<endl;

	// reverse string
	string s = "SANJOY";
	reverse(s.begin(), s.end());
	cout<<s<<endl;
}