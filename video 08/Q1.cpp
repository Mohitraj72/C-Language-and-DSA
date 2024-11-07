#include <iostream>
using namespace std;

int main() {
    int row, col;
    for (row = 1; row <= 5; row = row + 1) {
        // Space print
        for (col = 1; col <= 5 - row; col = col + 1)
            cout << "  ";
        // Star print
        for (col = 1; col <= row; col = col + 1)
            cout << "* ";
        cout << endl;
    }
    return 0;
}
