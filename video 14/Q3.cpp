#include<iostream>
using namespace std;

int Fact (int n=3) // Default parameter 
{
  int ans= 1;
  for (int i=1; i<=n; i++)
  ans = ans * i;
  return ans;
}


int main(){

   cout<<Fact();
    
    
    
  
}