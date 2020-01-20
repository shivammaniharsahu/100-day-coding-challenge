#include<iostream>
using namespace std;
int main()
{
	int i=1,j,isPrime,s,k,l;
	cin>>k>>l;
	for(i=2;i<=300;i++)
	{
		isPrime=1;
		for(j=2;j<=i/2;j++)
		{
			if(i%j==0)
			{
				isPrime=0;
				break;
			}
		}
		if(isPrime==1)
		{
			if(k+1==i)
			{
				s=0;
			}
			else
			{
				s++;
			}
		}
		
		if(s==l)
		{
			printf("%d ",i);
		}
	}
	
	return 0;
}
