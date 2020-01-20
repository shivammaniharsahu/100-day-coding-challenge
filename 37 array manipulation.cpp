#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int i,n,k,a,b,c,j,l;
		cin>>n>>k;
		long long int ar[n];
		for(i=0;i<n;i++)
		{
			cin>>ar[i];
		}
		for(l=0;l<k;l++)
		{
			a=ar[l%n];
			b=ar[n-(l%n)-1];
			c=a^b;
			ar[l%n]=c;
		}
		for(j=0;j<n;j++)
		{
			cout<<ar[j]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
