#include<iostream>
using namespace std;

int main() {
    int row, col;
    for (row = 1; row <= 5; row = row + 1) {
        // Space Print
        for (col = 1; col <= 5 - row; col = col + 1)
            cout << "  ";
        // Char Print
        for(char name = 'A'; name <= 'A' + row - 1; name = name + 1)
            cout << name << " ";
        cout << endl;
    }
    return 0;
}
