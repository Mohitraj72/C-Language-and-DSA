#include <iostream>
using namespace std;

int sum(int m, int n) // Function declare
{
    int ans = m + n; // function define
    return ans;
}

int main()
{
    int a, b;
    cout << "enter two number: ";
    cin >> a >> b;
    // function call
    cout << sum(a, b);
}