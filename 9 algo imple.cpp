#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,a,j,b,c=0,d,m,ar[1000],n;
	cin>>n;
	cin>>m;
	cin>>d;
	for(i=0;i<n;i++)
	{
		cin>>ar[i];
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(ar[i]=ar[j]==d)
			{
				c++;
			}
		}
	}
	cout<<c;
}
