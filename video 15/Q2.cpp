#include<iostream>
#include<cmath>
using namespace std;

int countdigit(int n) {
    int count = 0;
    while (n) {
        count++;
        n = n / 10;
    }
    return count;
}

bool Armstrong(int num, int digit) {
    int n = num, ans = 0, rem;
    while (n) {
        rem = n % 10;
        n /= 10;
        ans = ans + pow(rem, digit);
    }

    if (ans == num)
        return true;
    else
        return false;
}

int main() {
    int num;
    cin >> num;

    // count digit 
    int count = countdigit(num);

    // Armstrong Number
    cout << Armstrong(num, count) << endl;

    return 0;
}
