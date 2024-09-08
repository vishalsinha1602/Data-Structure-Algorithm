#include <bits/stdc++.h>
using namespace std;

// First, solve the problem. Then, write the code

int main()
{

    string s;
    cin >> s;

    unordered_map<char, int> mpp;

    for (int i = 0; i < s.size(); i++)
    {
        mpp[s[i]]++;
    }

    for (auto it : mpp)
    {
        cout << it.first << "->" << it.second << endl;
    }
    int q;
    cin >> q;
    while (q--)
    {
        char c;
        cin >> c;
        cout << mpp[c] << endl;
    }

    return 0;
}