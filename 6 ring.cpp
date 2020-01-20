#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int ar[1000],n,b,c,mid,j=0,i,f=0;
	cin>>n;
	for(i=0;i<2*n;i++)
	{
		cin>>ar[i];
	}
	mid=n;
	for(i=0;i<n;i++)
	{
		
		if(abs(ar[j]-ar[mid+j])==1)
		{
			f++;
		}
		
		j=j+1;
	}
	if(f==n)
	{
		cout<<"YES";
	}
	else
	{
		cout<<"NO";
	}
	
	
}
