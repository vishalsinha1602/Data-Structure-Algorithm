#include <bits/stdc++.h>
using namespace std;

//First, solve the problem. Then, write the code

// take the corresponding day number and print the folowing day

int main()
{

    int day;
    cin>>day;

    switch(day)
    {
        case 1: cout<< "monday";
        break; // break statement break out of every condition 
        case 2: cout<< "tuesday";
        break;
        case 3: cout<< "wednesday";
        break;
        case 4: cout<< "thursday";
        break;
        case 5: cout<< "friday";
        break;
        case 6: cout<< "saturday";
        break;
        case 7: cout<< "sunday";
        break;

        default: cout<<"enter valid week day"; // if none the case match then it execute defalut

    }






return 0;

}