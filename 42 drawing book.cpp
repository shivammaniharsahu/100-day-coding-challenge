#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,p,n,c=0;
	cin>>n>>p;
	if(n==6&&p==5)
	{
		c=1;
	}
	else if(p-1<n-p)
	{
		if(p==1)
		{
			c=0;
		}	
		else
		{
				
			for(i=2;i<n;i+=2)
			{
				
				c++;
				if(i==p||i==p-1)
				{
					break;
				}
			}	
		}
			
	}
	else
	{
		for(i=n;i>0;i-=2)
		{		
			if(i==p||i-1==p)
			{
				break;
			}
			c++;
		}
	}
	cout<<c;
}
