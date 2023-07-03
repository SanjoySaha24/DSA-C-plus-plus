#include <bits/stdc++.h>
using namespace std;

int count(int n){                   // OR 
    int cnt = 0;                    // int cnt = (int)(log10(n)+1);
    while (n > 0)                   // return cnt;
    {
        int lastDigit = n % 10;
        cnt = cnt + 1;
        n = n / 10;
    }
    return cnt;
}
int main()
{
    int n;
    cin>>n;
    cout<<count(n);
}