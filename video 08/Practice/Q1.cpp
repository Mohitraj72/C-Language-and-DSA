#include <iostream>
using namespace std;

int main()
{
    int row, col;
    for (row = 1; row <= 5; row = row + 1)
    {
        // Space Print
        for (col = 1; col <= 5 - row; col = col + 1)
            cout << "  ";

            // Number Print 
        for (col = row; col >= 1; col = col - 1)
            cout << col << " ";
        cout << endl;
    }
    return 0;
}