#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int i,j,n,max;
		cin>>n;
		long long int ar[n],s[n]; 
		for(i=0;i<n;i++)
		{
			cin>>ar[i];
		}
		for(i=0;i<n;i++)
		{
			s[i]=0;
			for(j=0;j<n;j++)
			{
				if(ar[j]%ar[i]==0&&j<i)
				{
					s[i]=s[i]+1;
				}
			}
		}
		max=s[0];
		for(i=1;i<n;i++)
		{
			if(s[i]>max)
			{
				max=s[i];
			}
		}
		cout<<max<<"\n";
	}
	return 0;
}
