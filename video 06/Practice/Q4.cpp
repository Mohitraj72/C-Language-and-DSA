#include <iostream>
using namespace std;

int main() {
    // Number of rows
    int rows = 5;

    // Print the pattern
    for (int i = 0; i < rows; i++) {
        // Print letters F to K
        for (char ch = 'F'; ch <= 'K'; ch++) {
            cout << ch << " ";
        }
        cout << endl; // Move to the next line after each row
    }

    return 0;
}
