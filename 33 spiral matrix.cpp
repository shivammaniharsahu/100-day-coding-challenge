#include<iostream>
using namespace std;
int main()
{
	int i,j,k,l,n,t,ar[n][n];
	
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			cin>>ar[i][j];
			
		}
		cout<<"\n";
	}
	for(i=1;i<n*n;i++)
	{
		for(j=0;j<n;j++)
		{
					
			for(k=1;k<=n*n;k++)
			{
				
				for(l=i;l<=n;i++)
				{
					cout<<ar[i][l];
				}
				for(m=n;m>0;m++)
				{
					cout<<ar[i][j]
				}
			}
			if(k<n)
			{		
				cout<<ar[k++][j];
			}
			else if(j==n-1)
			{
				l=j;
				cout<<ar[i][l++];
				
			}
		}
	}
}
