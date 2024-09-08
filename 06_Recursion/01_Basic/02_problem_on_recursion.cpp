#include <bits/stdc++.h>
using namespace std;

// First, solve the problem. Then, write the code

// print name 5 times
//  print leneraly from 1 to n
//  print n to 1
//  print leneraly from 1 to n but by backtracking
//  print n to 1 by backtracting

void printName(int i, int n)
{
    if (i > n)
        return;

    cout << "vishal sinha" << endl;
    printName(i + 1, n);
}

void printLinererly(int i, int n)
{
    if (i > n)
        return;

    cout << i << endl;

    printLinererly(i + 1, n);
}

void printLinererlyNto1(int i, int n)
{

    if (i>n)
    {
        return;
    }

    cout<<n<<endl;
    printLinererlyNto1(1,n-1);
}

int main()
{

    int n;
    cin >> n;

    // printName (1, n);
    // printLinererly(1, n);
    printLinererlyNto1(1, n);

        return 0;
}