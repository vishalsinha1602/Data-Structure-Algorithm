#include <bits/stdc++.h>
using namespace std;

// First, solve the problem. Then, write the code

int main()
{

    //? tree data structure is maintained or heap data structure always max_heap
    // maxiumum element default is always at top
    //! max heap => maximum element at the top
    priority_queue<int> pq;

    pq.push(3);
    pq.emplace(2);
    pq.push(10);
    pq.emplace(11);

    cout << pq.top() << endl; // 11
    pq.pop();

    //! min-heap => minimum element at the top

    priority_queue<int, vector<int>, greater<int>> pq;

    pq.push(10);
    pq.push(7);
    pq.push(2);

    cout << pq.top() << endl; // 2

    //!Note : time complexity of push is log(n)

    return 0;
}