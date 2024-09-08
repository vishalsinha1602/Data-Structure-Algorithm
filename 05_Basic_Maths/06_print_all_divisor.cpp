#include <bits/stdc++.h>
using namespace std;

// First, solve the problem. Then, write the code

int main()
{

    int n;
    cin >> n;

    for (int i = 1; i * i <= n; i++)
    { // sqrt(n)
        if (n % i == 0)
        {
            cout << i << " ";
            if (n / i != i)
            {
                cout << n / i << " ";
            }
        }
    }

    return 0;
}