#include <bits/stdc++.h>
using namespace std;

// First, solve the problem. Then, write the code
//  ************
//  *****  *****
//  ****    ****
//  ***      ***
//  **        **
//  *          *
//  *          *
//  **        **
//  ***      ***
//  ****    ****
//  *****  *****
//  ************

// when n=3
//    star-space-star
// 0-> 3     0     3
// 1-> 2     2     2
// 2-> 1     4     1

int main()
{

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = n; j > i; j--)
        {
            cout << "*";
        }
        for (int j = 0; j < 2 * i; j++)
        {

            cout << ' ';
        }
        for (int j = n; j > i; j--)
        {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = n; i > 0; i--)
    {
        for (int j = n; j > i; j--)
        {
            cout << "*";
        }
        for (int j = 0; j < 2 * i; j++)
        {

            cout << ' ';
        }
        for (int j = n; j > i; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}