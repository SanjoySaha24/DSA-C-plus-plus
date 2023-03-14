// ERROR
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while (n > 0)
    {
        int lastDigit = n % 10;
        n = n / 10;
        cout << n;
    }
}

// ERROR