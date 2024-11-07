#include <iostream>
using namespace std;

int main()
{
    int i, j;
    for (i = 4; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            cout << char('A' + j - 1) << " ";
        }
        cout << endl;
    }
    return 0;
}
