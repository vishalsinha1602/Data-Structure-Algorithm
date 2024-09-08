#include <bits/stdc++.h>
using namespace std;

// First, solve the problem. Then, write the code
// map -> timecomplexity is logn for all cases for storing and fetching
// unordered_map ->time complexity is o(1) constant
// but in worst condition it is 0(n)  because fo internal collision

// for coliision map uses hashing methods
// 1. Division Method --> only remember this
// 2. Folding Method
// 3. Mid square method

// it is always preffered to use unordered_map over ordered map

int main()
{

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    unordered_map<int, int> mpp;

    //! PRECALCULATING
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }
    //! FECTHING

    for (auto it : mpp)
    {
        cout << it.first << "->" << it.second << endl;
    }

    int q;
    cin >> q;
    while (q--)
    {
        int number;
        cin >> number;
        cout << mpp[number] << endl;
    }

    return 0;
}