#include <bits/stdc++.h>
using namespace std;

// First, solve the problem. Then, write the code

// Definition of Hashing:
// In order to optimize this approach, we need to use hashing.
// If we say the definition of hashing in a naive way,
// it is nothing but the combination of the steps, pre-storing, and fetching.

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    //! PRECALCULATING
    int hash[13] = {0};

    for (int i = 0; i < n; i++)
    {
        hash[arr[i]] += 1;
    }
    //! FETCH
    int q;
    cin >> q;
    while (q--)
    {
        int number;
        cin >> number;
        // Fetch
        cout << hash[number] << endl;
    }

    return 0;
}