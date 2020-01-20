#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int i,j,o,k,r=0,m=0,l=0,n,t,sum[100000],ar[100000],max;
	cin>>t;
	while(t--)
	{
		cin>>n;
		cin>>k;
		for(i=0;i<n;i++)
		{
			cin>>ar[i];
		}
		sort(ar,ar+n);
			sum[0]=0;
			for(i=0;i<n;i++)
			{
				for(o=0;o<k;o++)
				{
					sum[m]=sum[m]+ar[i]	;
				}
				m++;
				r++;
			}
		
		for(m=0;m<r;m++)
		{
			cout<<sum[m]<<endl;
		}
		max=sum[0];
		for(m=0;m<r;m++)
		{
			if(max==sum[m])
			{
				l++;
			}
		}
		cout<<l;
	}
	return 0;
}
