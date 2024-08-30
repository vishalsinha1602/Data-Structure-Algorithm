
#include <bits/stdc++.h>
using namespace std;

// First, solve the problem. Then, write the code

int main()
{

    // list is implemented using doubly liked list
    list<int> ls; // simillar to vector but also give front row operation

    // insert function in vector is coastly
    ls.push_back(2); // adding value 2 from back
    ls.emplace_back(4);

    ls.push_front(3); // adding value at front
    ls.emplace_front(5);

    // rest function are same as vector
    // begin , end ,rbegin,rend,insert,clear,size,swap

    for (auto x : ls)
    {
        cout << x << endl;
    }

    return 0;
}