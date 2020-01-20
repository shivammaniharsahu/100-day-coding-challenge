#include<iostream>
using namespace std;
int main()
{
	int i,j,n,ar[100],k,t,b;
	cin>>n;
	cin>>t;
	for(i=0;i<n;i++)
	{
		cin>>ar[i];
	}
	
	for(i=0;i<t;i++)
	{
		b=ar[0];
		for(j=0;j<n;j++)
		{
			
			ar[j]=ar[j+1];	
			
		}
		ar[n-1]=b;
	}
	
	for(i=0;i<n;i++)
	{
		cout<<ar[i]<<" ";
	}
}
