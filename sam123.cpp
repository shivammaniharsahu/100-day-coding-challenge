#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{	
		long long int rem,n,m,s=0,i;
		cin>>n>>m;
		for(i=1;i<=n;i++)
		{
			s=s+pow(i,i);
		}	
		rem=s%m;
		cout<<rem<<"\n";
	}
	return 0;
	
}
