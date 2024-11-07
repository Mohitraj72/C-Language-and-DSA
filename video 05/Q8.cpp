#include<iostream>
using namespace std;

// sum of natural Number 

int main(){

  int n,i,sum=0;
  cout<<"Enter the number: ";
  cin>>n;

  for(i=1; i<=n; i=i+1){
    sum = sum+i;
  }
    cout<<sum;
    
    
  return 0;
}