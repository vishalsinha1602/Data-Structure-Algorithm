#include <bits/stdc++.h>
using namespace std;

// First, solve the problem. Then, write the code

int main()
{
    //! store in utility  library
    //! pair store two value or object
    pair<int, int> p = {1, 2};
    //? access pair value
    cout << p.first << endl;
    cout << p.second << endl;

    //? we can store pair inside a pair

    pair<int, pair<int, int>> q = {1, {3, 5}};
    cout << q.first << endl;
    cout << q.second.first << endl;
    cout << q.second.second << endl;

    //? array in pair

    pair<int, int> arr[] = {{1, 2}, {2, 5}, {3, 5}};
    cout << arr[0].first << endl;
    cout << arr[1].first << endl;
    cout << arr[2].first << endl;
    return 0;
}