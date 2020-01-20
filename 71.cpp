#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int l,m,o,i,j,k,n,ar[100000],br[10000],min,s=0;
	cin>>n>>k;
	
	for(i=0;i<n;i++)
	{
		cin>>ar[i];
	}
	for(i=0;i<k;i++)
	{
		cin>>l>>m;
		for(j=l;j<=m;j++)
		{
			br[s++]=ar[j];
			cout<<ar[j]<<endl;
		}
		min=br[0];
		for(o=1;o<s;o++)
		{
			if(min>br[o])
			{
				min=br[o];
			}
		}
		cout<<min;
	}
}
