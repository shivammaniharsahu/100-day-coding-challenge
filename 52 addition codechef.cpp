#include<bits/stdc++.h>
using namespace std;
int bindeci(int);
void add(int ,int);
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int i,j,n;
		cin>>n;
		int a,b,u,v;
		for(i=0;i<n;i++)
		{
			cin>>a>>b;
			u=bindeci(a);
			v=bindeci(b);
			add(u,v);
		}
	}
}
int bindeci(int n)
{
	int rem,i=0,sum=0;
	while(n>0)
	{
		rem=n%10;
		sum=sum+rem*pow(2,i++);
		n=n/10;
	}
	
	return sum;
}
void add(int a,int b)
{
	int c=0,u,v;
	while(b>0)
			{
				u=a^b;
				v=a&b;
				a=u;
				b=v*2;
				c++;
			}
			cout<<c<<"\n";
}
