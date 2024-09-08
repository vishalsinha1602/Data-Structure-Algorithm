#include <bits/stdc++.h>
using namespace std;

// First, solve the problem. Then, write the code

int main()
{

    //! map -> unique key and sorted

    //!-----------------------------------------------------------

    //! used to store key-value pair in an ordered fashion {key,value}
    //? red-black tree for implementation
    // it can be of any data type pair
    //! Note : Map store unique key in sorted order

    map<int, int> mp;

    // input
    mp[1] = 2; //{1,2}
    // emplace
    // mp.emplace({2,3});// {1,2},{3,1}
    mp.insert({4, 5}); //{1,2},{3,1},{4,5}

    // map<int, pair<int,int>>mpp;
    //     mpp.insert(10,{1,3});

    //     for(auto x: mpp)
    //     {
    //         cout<< x.first()<<endl;
    //     }

    //! multi_map -> not-unique key and sorted

    //! multi_map -> unique key and not-sorted

    return 0;
}