#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	long long int s,i,k,n,ar[1000000],sum=0;
	cin>>n>>k;
	for(i=0;i<n;i++)
	{
		cin>>ar[i];
	}
	sort(ar,ar+n);
	for(i=0;i<n;i++)
	{
		sum=sum+ar[i];
		if(sum<=k)
		{
			s++;
		}
	}
	cout<<s<<"\n";
}
