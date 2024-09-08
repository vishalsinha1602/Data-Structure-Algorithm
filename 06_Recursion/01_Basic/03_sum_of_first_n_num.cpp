#include <bits/stdc++.h>
using namespace std;

// First, solve the problem. Then, write the code
void sum_of_num(int n, int sum)
{
    if (n < 1)

    {
        cout << sum << endl;
        return ;
    }

    sum_of_num(n - 1, sum + n);
}

int main()
{

    int n;
    cin >> n;

    sum_of_num(n, 0);

    return 0;
}