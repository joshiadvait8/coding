
// Given a string, Write a program that prints the number of vowels in it.
#include <iostream>
using namespace std;

int numOfVowels(string s)
{
    int vowels=0;
        for(int i=0;i<s.length();i++)
        {
            char c =tolower(s[i]);
            
            if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
                vowels++;
                
        }
        return vowels;
}

int main() {
	// your code goes here
	string s;
	cin>>s;
	
	int vowels = numOfVowels(s);
	cout<<"No of vowels: "<<vowels<<endl;
	return 0;
}
