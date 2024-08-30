#include <bits/stdc++.h>
using namespace std;

// First, solve the problem. Then, write the code
//  1 2 3 4 5 6
//  1 2 3 4 5
//  1 2 3 4
//  1 2 3
//  1 2
//  1

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; n--)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << j << ' ';
        }
        cout << endl;
    }

    return 0;
}