// print from N to 1 Backtrack

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
        print(i + 1, n);
        cout << i << endl;
        
    }
}

int main()
{
    int n;
    cin >> n;
    print(1, n);
}