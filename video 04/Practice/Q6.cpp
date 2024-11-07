#include<iostream>
using namespace std;

int main(){

    // Print all Odd numbers from 1 to n, take n as an input from the user.

    int n;
    cout << "enter The number: ";
    cin>>n;

    cout << "Odd number from 1 to " << n << " are: " << endl;

    for (int i =1; i<=n; i+=2){
        cout << i << " ";
    }  cout << endl;
    
    
    
    return 0;
}