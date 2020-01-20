#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int i,j,k=0,n,l,r,res[100000];
	cin>>l>>r;
	for(i=l;i<=r;i++)
	{
		for(j=i;j<=r;j++)
		{
			res[k]=i^j;	
			k++;
		}
	}
	sort(res,res+k);
	cout<<res[k-1]<<"\n";
}
