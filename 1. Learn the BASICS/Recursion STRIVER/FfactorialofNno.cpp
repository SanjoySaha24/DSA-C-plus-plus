// This is functional
#include <bits/stdc++.h>
using namespace std;

int fact(int n)
{
    if (n == 0)
    return 1; // return 1 is done bcoz when n becomes 0, after multiplication the result becomes 0.
    return n * fact(n-1);
}
int main()
{
    int n;
    cin >> n;
    cout<<fact(n);
}
