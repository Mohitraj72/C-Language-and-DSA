#include <iostream>
using namespace std;

//! Continue STATEMENT

int main()
{

  int i;
  for (i = 1; i < 50; i++)
  {
    if (i == 15)
      continue;
    cout << i << " ";
  }

  return 0;
}