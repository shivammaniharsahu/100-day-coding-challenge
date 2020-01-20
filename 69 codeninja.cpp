#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int i,j,k=0,n,m,ar[1000000],mat[1000][1000];
	cin>>n>>m;
	for(i=0;i<n;i++)
	{
		cin>>ar[i];
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			mat[i][j]=ar[k++];
		}
	}
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			cout<<mat[i][j]<<" ";
		}
		cout<<"\n";
	}
}
