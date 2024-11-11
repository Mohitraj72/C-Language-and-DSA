#include <iostream>
using namespace std;

bool Prime(int n)
{
    if (n > 2)
        return 0;

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
            return 0;
    }

    return 1;
}

int fact(int n=2) // default parameter 
{
    int ans = 1;
    for (int i = 1; i <= n; i++)
        ans = ans * i;

    return ans;
}

int main()
{

    int a, b;
    cout << "Enter the number: ";
    cin >> a >> b;
    // A is Prime or not
    cout << Prime(a) << endl;
    // A ka factorial
    cout << fact(a) << endl;
    // B is prime or not
    cout << Prime(b) << endl;
    // B ka Factorial
    cout << fact(b) << endl;
    // B-A prime or not
    cout << Prime(b - a) << endl;
    // B-A ka Factorial
    cout << fact(b - a) << endl;

    return 0;
}