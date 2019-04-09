//FizzBuzz Day 1
//Write a program that prints the numbers from 1 to n and for multiples of '3' print "Fizz" instead of the number, for the multiples of '5' print "Buzz", and for the numbers which are divisible by both 3 and 5, print FizzBuzz.
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
    int n;
    cin>>n;
    
    for(int i=1;i<=n;i++)
    {
        if(i%3==0&&i%5==0)
        {
            
            cout<<"FizzBuzz";
        }
        else if(i%3==0)
        {
            cout<<"Fizz";
        }
        else if(i%5==0)
        {
            cout<<"Buzz";
        }
        else{
            
            cout<<i;
        }
       cout<<" , ";
    }
    
	return 0;
}
