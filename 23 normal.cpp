#include<iostream>
using namespace std;
int main()
{
	long n,i,d,q,j,k,ar[100000],l,b,c;
	cin>>n;
	cin>>q;
	for(i=1;i<=n;i++)
	{
		cin>>ar[i];
	}
	for(j=1;j<q;j++)
	{
		cin>>b>>c;
		d=(ar[b]+ar[c])/2;
		cout<<d;
	}
	
}
