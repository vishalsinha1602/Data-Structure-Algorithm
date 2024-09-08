#include <bits/stdc++.h>
using namespace std;

// First, solve the problem. Then, write the code

int main()
{

    int n;
    cin >> n;
    int sum = 0;
    int dub = n;

    int count = 0;
    int temp = n;
    while (temp > 0)
    {
        temp = temp / 10;
        count++;
    }
    while (n > 0)
    {
        int last_num = n % 10;
        sum = sum + pow(last_num, count);
        n = n / 10;
    }

    if (sum == dub)
        cout << "true";
    else
        cout << "false";

    return 0;
}