#include <bits/stdc++.h>
using namespace std;

// First, solve the problem. Then, write the code

// 1
// 2 2
// 3 3 3
// 4 4 4 4
// 5 5 5 5 5
// 6 6 6 6 6 6

int main()
{

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << ' ';
        }
        cout << endl;
    }

    return 0;
}