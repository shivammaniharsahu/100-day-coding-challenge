#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,n,s=0,k,j=0,ar[10000],sum=0,br[10000];
	cin>>n>>k;
	for(i=0;i<n;i++)
	{
		cin>>ar[i];
		sum=ar[i]+sum;
	}
	sort(ar,ar+n,greater<int>());
	for(i=0;i<n;i++)
	{
		cout<<ar[i]<<" ";
	}
	cout<<endl;
	for(i=0;i<n;i++)
	{
		if(i<k)
		{
			s=s+ar[i];
			if(i==k-1)
			{
				j=2;
			}	
		}
		else
		{
			s=s+ar[i]*2;
		}
	}
	
	cout<<s;
}
