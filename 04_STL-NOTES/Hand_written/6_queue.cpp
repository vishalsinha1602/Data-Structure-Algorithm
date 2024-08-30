#include <bits/stdc++.h>
using namespace std;

// First, solve the problem. Then, write the code

int main()
{

    // stack is bacially mean  queue to buy something , FIFO - Fisrt In First Out
    // insertion and deletion are perform from both end
    // time complexit of stack operation is Big O(n)

    queue<int> s;
    s.push(1);
    s.push(2);
    s.emplace(4);
    s.emplace(8);
    cout << s.back();
    s.pop();
    cout << s.back();
    s.size();  // size
    s.empty(); // true or false

    while (!s.empty())
    {
        cout << s.back();
        s.pop();
    }

    stack<int> st1, st2;

    st1.swap(st2);

    return 0;
}