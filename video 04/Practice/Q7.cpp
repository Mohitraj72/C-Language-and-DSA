#include <iostream>
using namespace std;

int main()
{

    // Print all numbers from 1 to n, which is divisible by 4. Take n as an input from the user.

    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Numbers from 1 to " << n << " that are divisible by 4 are:" << endl;
    for (int i = 4; i <= n; i += 4)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
