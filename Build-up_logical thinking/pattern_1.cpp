#include <bits/stdc++.h>
using namespace std;

// First, solve the problem. Then, write the code

// 1.
// * * * * * *
// * * * * * *
// * * * * * *
// * * * * * *
// * * * * * *
// * * * * * *
int main()
{

    // m=rows and n=column
    int m, n;
    cin >> m >> n;
    for (int i = 0; i < m; i++)
    {

        for (int j = 0; j < n; j++)
        {
            cout << '*' << ' ';
        }
        cout << endl;
    }

    return 0;
}