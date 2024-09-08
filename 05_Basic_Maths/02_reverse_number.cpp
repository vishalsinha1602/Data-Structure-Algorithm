#include <bits/stdc++.h>
using namespace std;

// First, solve the problem. Then, write the code

int main()
{

  int n;
  cin >> n;

  int revno = 0;
 

  while (n > 0)
  {
    int last_num = n % 10;
    revno = (revno * 10) + last_num;
    n = n / 10;
  }
  cout << revno << endl;

  return 0;
}