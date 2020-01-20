#include<iostream>
using namespace std;
int main()
{
	int t,n,k,ar[1000],l,i,j,f,s,m;
	cin>>t;
	for(m=0;m<t;m++)
	{
	
		f=0;
		cin>>n;
		cin>>k;
		for(i=0;i<n;i++)
		{
			cin>>ar[i];
		}
		for(i=0;i<n;i++)
		{
			if(ar[i]<=0)
			{
				f++;
			}
		}
		if(f<k)
		{
			cout<<"YES";
		}
		else
		{
			cout<<"NO";
		}
		
	}
}
