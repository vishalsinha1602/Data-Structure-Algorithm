#include <bits/stdc++.h>
using namespace std;

// First, solve the problem. Then, write the code

bool check_palindrome(string &s, int i)
{

    if (i >= s.size() / 2)
    {
        return true;
    }
    if (s[i] != s[s.size() - i - 1])
    {
        return false;
    }

    return check_palindrome(s, i + 1);
}

int main()
{

    string s;
    cin >> s;

    cout << check_palindrome(s, 0);
    return 0;
}