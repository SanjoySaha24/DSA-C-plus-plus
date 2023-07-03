// print from 1 to N

#include <bits/stdc++.h>
using namespace std;

void print(int i, int n)
{
    if (i > n)
    {
        return;
    }
    else
    {
        cout << i << endl;
        print(i + 1, n);
    }
}
    int main()
    {
        int n;
        cin >> n;
        print(1, n);
    }
