#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int s=0,sum,i,j,n,k,ar[1000000],br[1000000];
		cin>>n>>k;
		for(i=0;i<n;i++)
		{
			cin>>ar[i]>>br[i];
		}
		sort(ar,ar+n);
		sort(br,br+n,greater<int>());
		for(i=0;i<n;i++)
		{
			
			sum=ar[i]+br[i];
			if(sum>=k)
			{
				s++;
			}
		}
		if(s==n)
		{
			cout<<"YES"<<"\n";
		}
		else
		{
			cout<<"NO"<<"\n";	
		}
	
	}
}
