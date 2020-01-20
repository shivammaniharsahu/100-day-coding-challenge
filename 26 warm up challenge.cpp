#include<iostream>
using namespace std;
int main()
{
	int i,j=0,ar[1000],b[1000],k,n,pair=0;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>ar[i];
	}
	for(i=0;i<n;i++)
	{
		int c=0;
		for(k=0;k<n;k++)
		{
			if(ar[i]==ar[k])
			{
				b[j++]=c++;
			}
		}
	}
	for(j=0;j<n;j++)
	{
		
		pair=b[j]+pair;	
	}
	cout<<pair;
	return 0;
	
}
