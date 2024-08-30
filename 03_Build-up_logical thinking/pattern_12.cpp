#include <bits/stdc++.h>
using namespace std;

// First, solve the problem. Then, write the code

// 1          1
// 12        21
// 123      321
// 1234    4321
// 12345  54321
// 123456654321

// when n=4
//    num -space-num
// 0-> 1     8     1
// 1-> 2     6     2
// 2-> 3     4     3
// 3-> 4     2     4

// formula=2(n-i)

int main()
{

    int n;

    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }

        for (int j = 1; j <= (2 * n - 2 * i); j++)
        {
            cout << ' ';
        }
        for (int j = i; j >= 1; j--)
        {

            cout << j;
        }

        cout << endl;
    }

    return 0;
}