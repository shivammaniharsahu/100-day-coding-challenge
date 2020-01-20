#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	long int j,sum[1000],sr[1000],ar[1000],br[1000],i;
	for(i=0;i<n;i++)
	{
		cin>>ar[i]>>br[i];
		sum[i]=ar[i]+br[i];
		sr[i]=ar[i]+br[i];
	}
	sort(sr,sr+n);
	for(i=0;i<n;i++)
	{
		
		for(j=0;j<n;j++)
		{
			if(sr[i]==sum[j]&&sr[i+1]!=sum[j])
			{
				cout<<j+1<<" ";	
			}
		}
	}
}
