#include <bits/stdc++.h>
using namespace std;

// First, solve the problem. Then, write the code

int main()
{

    //! vector is implemented using singly linked list
    //? insert operation is coastly
    //? vector is basically a dynamic array , we can increase aur decrease size dynamically
    vector<int> v;
    // both are use to insert value
    v.push_back(5);
    // emplace_back is faster than push_back
    v.emplace_back(3);

    cout << v[0] << endl;

    vector<pair<int, int>> vec;

    // need of curly braces
    vec.push_back({1, 2});
    // no need for curly braces
    vec.emplace_back(3, 5);

    cout << "vec=" << vec[0].first << endl;
    cout << "vec=" << vec[0].second << endl;
    cout << "vec=" << vec[1].first << endl;
    cout << "vec=" << vec[1].second << endl;

    // container already filled

    vector<int> v1(5, 100); //! this mean container of 5 instances is filled with 100

    vector<int> v(5); //! defining size of vector 5 bbut it can be change dynamically

    vector<int> v1(v); //! copy of v vector is inside v1

    // iterator

    // iterartor is pointing to the memory
    // pointing aat first element
    vector<int>::iterator it = v.begin();
    it++;
    // incerease the iterator by value 1 pointing at second

    // to access the value  at memory location we uses *
    cout << *(it) << endl;

    // pointing at the end of the vector
    vector<int>::iterator it = v.end();

    // vector<int>::iterator it = v.rend();//reverse end
    vector<int>::iterator it = v.begin(); // reverse begin

    // print using iterator
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *(it) << endl;
    }

    // print using auto = automatically identifies data type
    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << *(it) << endl;
    }

    // automatically identifies data types iterate all the items of vector v
    for (auto it : v)
    {
        cout << it << endl;
    }

    // erase function
    // at_positon

    v.erase(v.begin() + 1);

    v.erase(v.begin() + 1, v.begin() + 3); // {start , end}

    // insert elemnent in-between

    // position and element

    // {100,100}
    vector<int> v(2, 100);

    // {300,100,100}
    v.insert(v.begin(), 300);

    // {300,10,10,100,100}
    v.insert(v.begin() + 1, 2, 10);

    // give the size
    v.size();

    // pops out the last element
    v.pop_back();

    // v1={10,20}
    // v2={30,40}
    // v1.swap(v2) v1={30,40} and v2={10,20}

    v.clear(); // clear the vector

    v.empty(); // true or false
    return 0;
}