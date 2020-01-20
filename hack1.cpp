#include<bits/stdc++.h>
using namespace std;
int main()
{
	int y,b,r,s=0;
	cin>>y>>b>>r;
	
	
	 if(y<b&&y<r)
	{
		s=y+y+1+y+2;
	}
	
	else if(b<y&&b<r)
	{
		s=b+b+b;
	}
	else if(r<y&&r<b)
	{
		s=r+r+r-3;
	}
	else 
	{
		s=6;
	}
	cout<<s;
	return 0;
}
