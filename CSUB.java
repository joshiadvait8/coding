// https://www.codechef.com/problems/CSUB

/*
Explanation
Find total number of 1’s in the given string. Let suppose that the total number of 1’s in the string is n , then the answer is (n*(n+1))/2.

Reason

Let’s suppose that the n 1’s in the string occur at x1 , x2, … , xn position in the string then all substring starting from xi and ending at xj are taken, so total possible ways in taking it is (n*(n+1))/2
*/


import java.util.Scanner;
class Main
{
	public static void main(String args[])
	{
		Scanner sc= new Scanner(System.in);
		int t,len;
		t=sc.nextInt();
		String str;
		while(t>0)
		{
			len=sc.nextInt();
			str=sc.next();
			long ctr=0;
			for(int i=0;i<len;i++)
			{
				if(str.charAt(i)=='1')
				{
					ctr++;	
				}
			}
			ctr=ctr*(ctr+1)/2;
			System.out.println(ctr);
			t--;
		}
		
	}
}