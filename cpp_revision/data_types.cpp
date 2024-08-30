#include <bits/stdc++.h>
using namespace std;

//First, solve the problem. Then, write the code

int main()
{

//integer 2 or 4 bytes
    int x=10; //integer 2 bytes

    long x=100003444; // long integer 4 bytes

    long long x=976283495793846583945; // long long integer 8 bytes
    
//float = 4 bytes ,double =8bytes

    float x=20.4; // floa 4-byte

    double x=10.83749403; // double 8 byte

//string  and getline 

    string str;
    getline(cin,str); // it jus picked up till the line break not next line.
    cout<<str;

// char

char ch='h';
cout<<ch;

//NOTE : if it is single charcter we usually prefer to char not string as ,it take more space than char.














return 0;

}