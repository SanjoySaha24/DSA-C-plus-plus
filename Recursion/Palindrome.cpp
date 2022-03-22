#include <bits/stdc++.h>
using namespace std;

bool palindrome(string str, int start, int end)
{
    if (start >= end)
        return true;

    if (str[start] != str[end])
        return false;

    return palindrome(str, start + 1, end - 1);
}
int main()
{
    string str = "bob";
    int len = str.length();
    if (palindrome(str, 0, len - 1))
    {
        cout << "Palindrome";
    }
    else
        cout << "Not Palindrome";
        }