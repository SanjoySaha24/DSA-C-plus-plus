// print from 1 to N Backtrack

#include <bits/stdc++.h>
using namespace std;

void print(int i, int n)
{
    if (i < 1)
    {
        return;
    }
    else
    {
        print(i - 1, n);
        cout << i << endl;
        // here function is used before printing output
    }
}
    int main()
    {
        int n;
        cin >> n;
        print(n, n);
    }
