#include <iostream>
using namespace std;

int sum(int m, int n) // function declare
{
  int ans = m + n; // Function Define
  return ans;
}

int mul(int a, int b)
{
  int ans = a * b;
  return ans;
}

void fun()
{
  cout << "Hello Mohit Raj";
}

int main()
{

  int a, b;
  cout << "Enter your Number: ";
  cin >> a >> b;

  cout << sum(a, b) << endl;
  cout << mul(a, b) << endl;

  fun();

  return 0;
}