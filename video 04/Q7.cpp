#include <iostream>
using namespace std;

// +ve, -ve, 0

int main()
{

  int num;
  cout << "Enter your Number: ";
  cin >> num;

  if (num > 0)
  {
    cout << "Positive";
  }
  else if (num == 0)
  {
    cout << "Zero";
  }
  else
  {
    cout << "negative";
  }

  return 0;
}