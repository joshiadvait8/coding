//Day 2 pallindrome
// Given a string, write a program to return a new string with reversed order of characters.

#include <iostream>
using namespace std;
int main() {
  string str;
  cin>>str;
  string str2 = str;
  int len = str.length();
  for(int i=0;i<len/2;i++)
  {
    char temp;
    temp = str[i];
    str[i] = str[len-i-1];
    str[len-i-1] = temp;

  }
  
  if(str == str2)
  {
      cout<<"pallindrome";
  }
  else
  {
      cout<<"Not a pallindrome";
  }
  
}