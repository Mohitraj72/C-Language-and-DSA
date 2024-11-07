#include <iostream>
using namespace std;

int main()
{

  int i;
  char j;

  for (i = 1; i <= 5; i++)
  {
    for (j = 'a'; j <= 'e'; j++)
    {
      cout << j << " ";
    }
    cout << endl;
  }

  return 0;
}