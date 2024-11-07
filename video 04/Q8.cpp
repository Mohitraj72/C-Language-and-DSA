#include<iostream>
using namespace std;

//! Check a,e,i,o,u  Vowel

int main(){

  char ch;
  cout<< "Enter Your Character: ";
  cin>> ch;

  if(  ch == 'a' || ch == 'A'){
    cout<<"Vowel";
  }
  else if (ch=='e' || ch == 'E'){
    cout<<"vowel";
  }
  else if (ch=='i' || ch == 'I'){
    cout<<"vowel";
  }
  else if (ch=='o' || ch == 'O'){
    cout<<"vowel";
  }
  else if (ch=='u' || ch == 'U'){
    cout<<"vowel";
  }
   else {
    cout<<"Constant"; 
  }

  return 0;
}