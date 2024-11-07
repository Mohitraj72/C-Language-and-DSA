#include<iostream>
using namespace std;


//!  Ticket Price Calculator: Create a program that asks the user for their age and checks if they qualify for a discounted ticket price (e.g., under 12 and over 65 get discounts), If they are eligible print “YES” else “NO”

int main(){

    int age ;
    cout<<"Enter your age: ";
    cin>>age;

    if (age < 12  || age > 65)
    {
        cout << "yes" << endl;

    } else {
        cout << "NO"<< endl;
    }
    
    return 0;
}