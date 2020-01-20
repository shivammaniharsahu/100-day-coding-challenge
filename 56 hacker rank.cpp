#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	long int n;
	cin>>n;
	long int ar[n],j=0,br[n];
	long int i,s=0,sum=0;
	br[0]=0;
	for(i=0;i<n;i++)
	{
		cin>>ar[i];
		sum=sum+ar[i];
	}
	for(i=0;i<n;i++)
	{
		if((ar[i]*n)>sum)
		{
			br[j++]=ar[i];
		}
	}
	sort(br,br+j);
	cout<<br[0];
}
