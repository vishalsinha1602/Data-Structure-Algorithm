#include <bits/stdc++.h>
using namespace std;

// First, solve the problem. Then, write the code

// Find the highest/lowest frequency element

int main()
{

    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    unordered_map<int, int> mpp;

    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }

        int maxFreq = INT_MIN, minFreq = INT_MAX;
    int maxFreqElement = -1, minFreqElement = -1;

    // Iterate over the map to find the highest and lowest frequency elements
    for (auto it : mpp)
    {
        if (it.second > maxFreq)
        {
            maxFreq = it.second;
            maxFreqElement = it.first;
        }

        if (it.second < minFreq)
        {
            minFreq = it.second;
            minFreqElement = it.first;
        }
    }

    cout << maxFreqElement << " " << minFreqElement << endl;

    return 0;
}