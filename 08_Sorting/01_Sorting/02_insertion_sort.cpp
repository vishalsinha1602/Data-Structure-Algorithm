#include <bits/stdc++.h>
using namespace std;

// First, solve the problem. Then, write the code

void insertion_sort(vector<int> &arr, int n)
{
    for (int i = 0; i <= n - 1; i++)
    {
        int j = i;

        while (j > 0 && arr[j - 1] > arr[j])
        {
            swap(arr[j], arr[j - 1]);
            j--;
        }
    }
}

int main()
{

    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    insertion_sort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}