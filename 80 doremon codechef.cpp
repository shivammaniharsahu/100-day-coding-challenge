#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n,m,i,j,c=0;
		cin>>n>>m;
		long long int ar[n][m];
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				cin>>ar[i][j];
			}
		}
	
		for(i=0;i<n-2;i++)
		{
			for(j=0;j<m-2;j++)
			{
				if(ar[i][j+1]==ar[i+2][j+1]&&ar[i+1][j]==ar[i+1][j+2])
				{
					c++;
				}
				
			}
		}
		cout<<m*n+c<<"\n";
		
	}
}
