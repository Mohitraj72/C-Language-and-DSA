#include <iostream>
using namespace std;

int main()
{
  int num;
  cout << "Enter your Number ";
  cin >> num;

  for (int i = 0; i <= num; i = i + 1)
  {
    if (i % 2 == 0)
    {
      cout << i << "This is Even Number\n";
    }
    else
    {
      //cout << i << "This is odd Number\n";
    }
  }

  // cout << i << "Square is: " << i * i << "\n";

  return 0;
}