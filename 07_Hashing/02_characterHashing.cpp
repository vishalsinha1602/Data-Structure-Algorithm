#include <bits/stdc++.h>
using namespace std;

// First, solve the problem. Then, write the code

int main()
{

    string s;
    cin >> s;

    int hash[256] = {0};

    for (int i = 0; i < s.size(); i++)
    {
        hash[s[i]] += 1;
    }

    int q;
    cin >> q;
    while (q--)
    {
        char c;
        cin >> c;

        cout << hash[c] << endl;
    }

    return 0;
}