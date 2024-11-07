#include<iostream>
using namespace std;

int main(){

    int age;
    cout << "Enter your age: ";
    cin >> age;

    if (age >= 13 && age <= 19)
    cout << "teenager";
    else 
    cout << "No teenager";
    
    
    
    return 0;
}