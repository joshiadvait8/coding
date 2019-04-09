//Day 2 reverse of string
// Given a string, write a program to return a new string with reversed order of characters.

#include <iostream>
using namespace std;
int main() {
  string str;
  cin>>str;
  int len = str.length();
  for(int i=0;i<len/2;i++)
  {
    char temp;
    temp = str[i];
    str[i] = str[len-i-1];
    str[len-i-1] = temp;

  }
  cout<<"Reversed string: "<<str;
}