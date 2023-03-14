#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main(){
    vector<int> v = {50,7,290,10};
    sort(v.begin(), v.end());

    for(int x:v)
    cout<<x<<" ";
    //--> 7 10 50 290 

    cout<<endl;
     sort(v.begin(),v.end(),greater<int>());
    // greater function gives decreasing order
	
	cout<<endl;
	for(int x: v)
	    cout<<x<<" ";
    //--> 290 50 10 7

}
