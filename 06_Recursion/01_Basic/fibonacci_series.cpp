#include <bits/stdc++.h>
using namespace std;

// First, solve the problem. Then, write the code
// Problem Statement: Given an integer N. Print the Fibonacci series up to the Nth term.

// Examples:

// Example 1:
// Input: N = 5
// Output: 0 1 1 2 3 5
// Explanation: 0 1 1 2 3 5 is the fibonacci series up to 5th term.(0 based indexing)

// Example 2:
// Input: 6

// Output: 0 1 1 2 3 5 8
// Explanation: 0 1 1 2 3 5 8 is the fibonacci series upto 6th term.(o based indexing)

int fibonacci_series(int n)
{
    if (n <= 1)
    {
        return n;
    }
    return fibonacci_series(n - 1) + fibonacci_series(n - 2);
}
int main()
{

    int n;
    cin >> n;

    cout << fibonacci_series(n);
    return 0;
}