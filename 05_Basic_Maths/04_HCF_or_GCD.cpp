#include <bits/stdc++.h>
using namespace std;

// First, solve the problem. Then, write the code

int main()
{

    int a, b;
    cin >> a >> b;

    int n = min(a, b);

    for (int i = n; i >= 1; i--)
    {
        if (a % i == 0 || b % i == 0)
        {
            cout << i;
            break;
        }
    }

    return 0;
}