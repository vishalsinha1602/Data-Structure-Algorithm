#include <bits/stdc++.h>
using namespace std;

// First, solve the problem. Then, write the code

// function : function are the set of block of code used to do some specific task and we can reuse it again and again
// Funcion Type
// void=> which doesn't return anything
// return=>
// parameterised
// non-parameterised

// void add(int a,int b)
// {
//     int sum = a+b;
// }

// int add(int a,int b)
// {
//     int sum = a+b;
// }

// pass by value => goes in function ass copy of the variable not changing the real value

// pass by reference => goes through reference means goes he original address and it lead to change to value
// array always goes through reference

void dosomething(int &a)
{ // pass by reference
    a = a + 10;
    cout << a;
}

int main()
{
    // int a,b;
    // cin>>a>>b;
    // int sum=add(a,b);
    // cout<<sum;
    int a = 10;
    dosomething(a);
    cout << a;

    return 0;
}