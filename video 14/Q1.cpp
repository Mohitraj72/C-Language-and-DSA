#include <iostream>
using namespace std;

int sum(int m, int n) // Function declare
{
    int ans = m + n; // function define
    return ans;
}

int mul(int m, int n)
{
    int ans = m * n;
    return ans;
}

int main()
{
    int a, b;
    cout << "enter two number: ";
    cin >> a >> b;
    // function call
    int ans =  sum(a, b);
    cout << ans ;
    cout << endl;

    cout << mul(a, b);
}
