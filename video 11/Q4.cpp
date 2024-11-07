#include <iostream>
using namespace std;

int main()
{

  // print Even Number
  int n = 31, i = 0;
  while (i <= n)
  {
    if (i % 2 == 0)
    {
      cout<<i<<" ";
    }
    i++;
  }

  return 0;
}