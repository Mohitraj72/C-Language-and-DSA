#include<iostream>
using namespace std;

int main(){

  int n, fact=1, i;
  cout<<"Enter The Number: ";
  cin>>n;

  for(i=1; i<=n; i=i+1){
    fact = fact*i;
  }
    cout<<fact;
    
    
  return 0;
}