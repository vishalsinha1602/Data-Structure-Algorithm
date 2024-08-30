#include <bits/stdc++.h>
using namespace std;

// First, solve the problem. Then, write the code

int main()
{

    // stack is bacially mean stack of book in library LIFO - Last In First Out
    // insertion and deletion are perform from single end which is rear end of the stack
    // time complexit of stack operation is Big O(n)

    stack<int> s;
    s.push(1);
    s.push(2);
    s.emplace(4);
    s.emplace(8);
    cout << s.top();
    s.pop();
    cout << s.top();
    s.size();  // size
    s.empty(); // true or false

    while (!s.empty())
    {
        cout << s.top();
        s.pop();
    }

    stack<int> st1, st2;

    st1.swap(st2);

    return 0;
}