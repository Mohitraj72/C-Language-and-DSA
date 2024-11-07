#include<iostream>
using namespace std;

int main(){

    int row,col;
    int n;
    cout<< "Enter The Number: ";
    cin>>n;

    for (row =1; row<=n; row=row+1)
    {
        // Space Print 
        for (col=1;col<=n-row;col=col+1)
        cout << "  ";

        // Number Print
        for(col=1;col<=row;col=col+1)
        cout<<row<<" ";

        cout<<endl; 
    }
    
    
    
    return 0;
}