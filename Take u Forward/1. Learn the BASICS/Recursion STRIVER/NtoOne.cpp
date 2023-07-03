// print from N to 1

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
        cout << i << endl;
        print(i - 1, n);
    }
}

int main()
{
    int n;
    cin >> n;
    print(n, n);
}