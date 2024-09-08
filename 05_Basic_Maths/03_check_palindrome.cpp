#include <bits/stdc++.h>
using namespace std;

// First, solve the problem. Then, write the code

int main()
{

    int n;
    cin >> n;

    int rev_no = 0;
    int dublicate = n;

    while (n > 0)
    {
        int last_num = n % 10;

        rev_no = (rev_no * 10) + last_num;
        n = n / 10;
    }

    if (rev_no == dublicate)
        cout << "true";
    else
        cout << "false";

    return 0;
}