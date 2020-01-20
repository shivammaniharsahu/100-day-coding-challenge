#include<bits/stdc++.h>
using namespace std;
int main()
{
	int max=0,i,j,n,x,f=0,ar[1000],a[1000],b[100],k=0,c=0;
	cin>>n;
	cin>>x;
	for(i=0;i<n;i++)
	{
		cin>>ar[i]>>a[i];
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[j]+a[i]==x&&i!=j)
			{
				
				b[k]=ar[j]+ar[i];
				
				c++;
				k++;
				f=1;
			}	
		}
		
	}
	if(f==1)
	{
		
			max=b[0];
			for(k=0;k<c;k++)
			{
				
				if(max<b[k])
				{
					
					max=b[k];
				}
			}
			cout<<max;	
	}
	else 
	{
		cout<<"Got caught!";
	}
}
