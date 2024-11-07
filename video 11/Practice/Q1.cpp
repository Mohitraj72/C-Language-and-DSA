#include <iostream>
using namespace std;

// Take a number n from the user and print all the even numbers between 1 and n(inclusive). Do this using while and do while loop separately.


//! While Loop
// int main()
// {

//     int n;
//     cout << "Enter a Number: ";
//     cin >> n;

//     int i = 2;

//     while (i <= n)
//     {
//         cout << i << " ";
//         i += 2;
//     }

//     cout << endl;

//     return 0;
// }

//! Usng Do while Loop
int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;

    int i = 2;
    if (i <= 2)
    {
        do
        {
            cout << i << " ";
            i += 2;
        } while (i <= n);
    }
    cout << endl;
    return 0;
}