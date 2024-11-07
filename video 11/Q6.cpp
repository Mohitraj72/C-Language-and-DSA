#include<iostream>
using namespace std;

int main(){
    int sum = 0;
    int i = 1; // Initialize i before using it

    do {
        sum = sum + i; // Increment sum by i
        cout << sum << " ";
        i++;
    } while (i <= 10);

    //cout << endl;

    return 0;
}
