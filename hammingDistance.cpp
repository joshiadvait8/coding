
// The Hamming distance between two strings of equal length is the number of positions at which the corresponding symbols are different.

// It measures the minimum number of substitutions required to change one string into the other or the minimum number of errors that could have transformed one string into the other.
// Ques)Given 2 strings, we will find the number of positions at which the corresponding characters are different.

#include <iostream>
using namespace std;

int hammingDistance(string s1,string s2)
{
    int s1len = s1.length(),s2len= s2.length();
	if(s1len!=s2len)
	{
	    cout<<"Two strings are not of equal length";
	   return 0; 
	}
	int distance=0;
	for(int i=0;i<s1len;i++)
	{
	    if(s1[i]!=s2[i])
	    {
	        distance++;
	    }
	}
	return distance;
}

int main() {
	// your code goes here
	string s1,s2;
	cin>>s1>>s2;
	int distance = hammingDistance(s1,s2);
	cout<<"Hamming distance: "<<distance<<endl;
    cout<<hammingDistance("karolin", "kathrin")<<endl;
    cout<<hammingDistance("karolin", "kerstin")<<endl;
    cout<<hammingDistance("1011101", "1001001")<<endl;
    cout<<hammingDistance("2173896", "2233796")<<endl;
	return 0;
}
