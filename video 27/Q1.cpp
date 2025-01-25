#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Create vector, declare
    vector<int> v;
    vector<int> v1(5, 1);

    // Size and capacity
    cout << "size of v:" << v.size() << endl;
    cout << "Capacity of v:" << v.capacity() << endl;

    v.push_back(2);
    v.push_back(3);
    v.push_back(10);
    cout << "Size of v:" << v.size() << endl;
    cout << "Capacity of v:" << v.capacity() << endl;

    // update value
    v[1] = 5;

    cout << "Size of v:" << v1.size() << endl;
    cout << "Capacity of v:" << v1.capacity() << endl;

    v1.push_back(8);

    cout << "Size of v:" << v1.size() << endl;
    cout << "Capacity of array v:" << v1.capacity() << endl; 

    return 0;
}