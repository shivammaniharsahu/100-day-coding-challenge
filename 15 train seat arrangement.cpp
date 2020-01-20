#include<iostream>
using namespace std;
int funct(int);
int main()
{
	int i,t,n,j,k,l;
	cin>>t;
	for(i=0;i<t;i++)
	{
		cin>>k;
		if(k<12)
		{
			
		}	
		funct(k);
	}
	
}
int funct(int n)
{
	if(12*n-11==n)
	{
		cout<<12*n<<" "<<"WS";
	}
	
	else if(12*n-10==n+1)
	{
		cout<<12*n-1<<" "<<"MS";
	}
	else if(12*n-9==n+2)
	{
		cout<<12*n-2<<" "<<"AS";
	}
	else if(12*n-8==n+3)
	{
		cout<<12*n-3<<" "<<"WS";
	}
	
	else if(12*n-7==n+4)
	{
		cout<<12*n-4<<" "<<"MS";
	}
	else if(12*n-6==n+5)
	{
		cout<<12*n-5<<" "<<"AS";
	}
}
