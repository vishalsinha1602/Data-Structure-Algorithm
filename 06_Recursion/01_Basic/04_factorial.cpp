#include <bits/stdc++.h>
using namespace std;

// First, solve the problem. Then, write the code

int factorial(int n)
{
    if (n == 0 || n==1)
    {
        return 1;
    }
    return n * factorial(n - 1);
}

int main()
{

    int n;
    cin >> n;

    int fact = factorial(n);
    cout << fact << endl;

    return 0;
}