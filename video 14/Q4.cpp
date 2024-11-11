#include <iostream>
using namespace std;
// Swapping two Numbers

void swap(int &a, int &b) // Passed by refernce
{
    int c;
    c = a;
    a = b;
    b = c;
}

void swap(float &c, float &d)
{
    float r = c;
    c = d;
    d = r;
}

int main()
{

    int a, b;
    cin >> a >> b;

    swap(a, b);
    cout << a << " " << b << " ";

    float f1 = 4.8, f2 = 3.6;
    swap(f1, f2);

    cout << f1 << " " << f2;
}