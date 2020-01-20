#include<bits/stdc++.h>
using namespace std;
int main()
{
	int ar[100][100],l,i,j,c=0,n,m;
	cin>>n;
	cin>>m;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			cin>>ar[i][j];
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(ar[i][j]==1&&(ar[i-1][j]==1||ar[i][j-1]==1||ar[i][j+1]==1||ar[i+1][j]==1||ar[i+1][j+1]))
			{
				
				c++;
			}
		}
	}
	cout<<c;
}
