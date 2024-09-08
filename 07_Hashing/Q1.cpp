#include <bits/stdc++.h>
using namespace std;

// First, solve the problem. Then, write the code
//  Count frequency of each element in the array

int main()
{

    int N;
    cin >> N;
    vector<int> arr(N);

    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    int P;
    cin >> P;

    vector<int> hash(P + 1, 0);

    // precalculating

    for (int i = 0; i < N; i++)
    {
        hash[arr[i]]++;
    }

    // fecthing
    for (int i = 1; i <= N; i++)
    {

        cout << hash[i] << " ";
    }

    return 0;
}