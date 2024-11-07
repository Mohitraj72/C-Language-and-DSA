#include<iostream>
using namespace std;

// int main(){

//     int n;
//     cout<< "Enter the Number: ";
//     cin >> n;

//     int fact =1;
//     int i =1;
//     while (i <=n) {
//         fact *= i;
//         i++;
//     }
//     cout << "Factorial of " << n << " is " << fact << endl;
    
    
    
    
//     return 0;
// }



int main(){
    int n;
    cout << "Enter the number ";
    cin >> n;

    int fact = 1;
    int i =1;
    if (n>=0){
        do{
            fact *=1;
            i++;
        } while (i <=n);
    }
    cout << "Factorail of " << n << " is " << fact << endl;
    return 0;
}