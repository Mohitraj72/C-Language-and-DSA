#include<iostream>
using namespace std;

int main(){

    int temp;
    cout<< "Enter your temperture "; 
    cin >> temp;

    if (temp > 70 && temp< 90){
        cout << "yes";
    } else {
        cout << "No";
    }
    
    
    return 0;
}