#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int i,n,k,j,ar[10000],sum=0,br[10000];
	cin>>n>>k;
	for(i=0;i<n;i++)
	{
		cin>>ar[i]>>br[i];
		sum=ar[i]+sum;
	}
	cout<<sum-k;
}
