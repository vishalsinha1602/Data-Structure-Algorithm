#include <bits/stdc++.h>
using namespace std;

// First, solve the problem. Then, write the code

//! two pointer approach
// void reverse(int l, int arr[], int n)
// {

//     if (l >= n )
//     {
//         return;
//     }

//     swap(arr[l], arr[n]);
//     reverse(l + 1, arr, n-1);
// }

//! one pointer approach

void reverse(int l, int arr[], int n)
{

    if (l >= n / 2)
    {
        return;
    }

    swap(arr[l], arr[n - l - 1]);
    reverse(l + 1, arr, n);
}

int main()
{

    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    reverse(0, arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}