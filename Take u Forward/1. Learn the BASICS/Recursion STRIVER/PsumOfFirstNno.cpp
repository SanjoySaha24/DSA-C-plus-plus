// general formula used (n(n+1))/2

// This is parameterised
#include <bits/stdc++.h>
using namespace std;

int print(int i, int sum)
{
    if (i < 1)
    {
        cout << sum << endl;
    }
    else
    {
        return print(i - 1, sum + i);
}
}
int main()
{
    int i;
    cin >> i;
    print(i, 0);
}