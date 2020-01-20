#include<iostream>
using namespace std;
int main()
{
	int ar[100],m,f=0,t,n,i,j;
	cin>>n;
	cin>>m;
	for(i=1;i<=n;i++)
	{
		cin>>ar[i];
	
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
				
			if(ar[i]+ar[j]==m)
			{
				f=1;
			}
			
		}
	
	}
	if(f==0)
	{
		cout<<"false";
	}
	else
	{
		cout<<"true";
	}
	return 0;
}
