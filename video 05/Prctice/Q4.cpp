#include<iostream>
using namespace std;

int main(){

    // There is an Arithmetic Progression, First number is 220 and Common Difference is 7. So print all the numbers from 220 to 730 which follow the AP.

    int first = 220;
    int common_diff = 7;

    for (int current = first; current <= 730; current += common_diff){
        cout<<current << " ";
    }

    
    
    
    return 0;
}