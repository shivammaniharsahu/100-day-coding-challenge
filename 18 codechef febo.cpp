#include<bits/stdc++.h>
using namespace std;
long febo(long);
int main()
{
	long t,n,i;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		cin>>n;
		febo(n);
	}
	return 0;
	
}
long febo(long n)
{
	long u,p,j,ar[10000],r,l=0,c=0,t,k=0,nxt=0,f=0,s=1;
		for(j=0;j<n;j++)
		{
			ar[k++]=nxt;		
			
			f=s;
			s=nxt;
			nxt=(s+f)%10;	
		}
		u=log2(n);
		p=pow(2,u);
		r=n%p;
		printf("%d",ar[n-r-1]);
}
