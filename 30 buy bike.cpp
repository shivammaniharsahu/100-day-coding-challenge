#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long ar[10000],i,j,k,n,x,f=0,s=0;
	cin>>n;
	cin>>x;
	for(i=0;i<n;i++)
	{
		cin>>ar[i];
	}
	for(i=0;i<n;i++)
	{
		if(ar[i]%2==1)
		{
			f++;
		}
		else if(ar[i]<x)
		{
			s++;
		}
	}	
	if(f==n)
	{
		cout<<"NO";
	}
	else if(s>0)
	{
		cout<<"Yes";
	}
	return 0;
}

