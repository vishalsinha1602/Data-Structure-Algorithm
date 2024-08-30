#include <bits/stdc++.h>
using namespace std;

// First, solve the problem. Then, write the code

//  *
//  **
//  ***
//  ****
//  *****
//  ******
//  *****
//  ****
//  ***
//  **
//  *

int main()
{

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << '*';
        }
        cout << endl;
    }
    for (int i = n; i >= 0; i--)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << '*';
        }
        cout << endl;
    }

    return 0;
}