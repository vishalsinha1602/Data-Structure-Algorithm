#include <bits/stdc++.h>
using namespace std;

// First, solve the problem. Then, write the code
//  ******
//  *    *
//  *    *
//  *    *
//  *    *
//  ******

int main()
{

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n; j++)
        {
            //  up      down     left    right
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
                cout << '*';
            else
                cout << ' ';
        }

        cout << endl;
    }

    return 0;
}