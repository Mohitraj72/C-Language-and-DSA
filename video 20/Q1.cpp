#include <iostream>
using namespace std;

int main() {
    int arr[1000]; // Corrected array declaration with square brackets
    int n;

    cout << "Enter the size of array: ";
    cin >> n;

    cout << "Enter the elements in the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = n - 2; i >= 0; i--) {
        bool swapped = 0;
        for (int j = 0; j <= i; j++) {
            if (arr[j] > arr[j + 1]) {
                swapped = 1;
                swap(arr[j], arr[j + 1]);
            }
        }
        if (!swapped) // Corrected 'swap' to 'swapped'
            break;
    }

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
