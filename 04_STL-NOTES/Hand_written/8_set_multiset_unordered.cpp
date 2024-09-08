#include <bits/stdc++.h>
using namespace std;

// First, solve the problem. Then, write the code

int main()
{

    //! sets => ordered and unique -> log(n)

    //? set store everything in sorted order an unique

    set<int> st;
    st.emplace(2); //{2}
    st.emplace(4); //{2,4}
    st.emplace(1); //{1,2,4}
    st.insert(1);  //{1,2,4,}

    //? it return iterar=tor which point at 3
    //? and if element is not in the listt it point after st.end()
    auto it = st.find(4);
    st.erase(4); // {Start ,end } // take logn time

    auto cn = st.count(2); //  {1 or o}

    //! multiset => ordered but not-unique -> 0(1)

    //? obey order set not unique we can multiplw occurence of sets

    // st.push(1);
    // st.push(1);
    // st.push(1);
    // st.push(1); {1,1,1,1}

    //! unordered sets => un-ordered but unique -> log(n)

    //? everthing will be the same
    // lower_bound() and upper_bound() does not work

    return 0;
}