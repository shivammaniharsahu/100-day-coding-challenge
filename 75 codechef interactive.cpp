#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int r,i,j,a,b,c,d,e,s,n;
		scanf("%lld",&n);
		scanf("%lld",&a);
		s=2*pow(10,n)+a;
		printf("%lld\n",s);
		fflush(stdout);
		scanf("%lld",&b);
		c=pow(10,n)-b;
		printf("%lld\n",c);
		fflush(stdout);
		scanf("%lld",&d);
		e=pow(10,n)-d;;
		printf("%lld\n",e);
		fflush(stdout);
		scanf("%lld",&r);
		if(r==-1)
		{
			break;
		}
		fflush(stdout);
	}
	
}
