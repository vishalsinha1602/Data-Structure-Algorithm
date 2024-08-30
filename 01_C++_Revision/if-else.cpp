#include <bits/stdc++.h>
using namespace std;

// First, solve the problem. Then, write the code

// write a code for the taking age as input and give output if they are adult or not
int main()
{

    int age;
    cin >> age;

    /*if(conditon) if this is true
     {
         execute this block
     }otherwise
     else{
     execute this block
      }*/

    // Note : it is not mandatory to give else for every if .
    if (age >= 18)
    {
        cout << "you are an adult \n";
    }
    else
    {
        cout << "not an adult";
    }

    // multiple if else condition

    // we use elseif{}
    return 0;
}