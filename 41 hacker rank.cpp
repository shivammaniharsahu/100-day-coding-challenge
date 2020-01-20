#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,d;
	cin>>n;
	if(n%4==0)
	{
		if(n%100==0)
		{
			if(n%400==0)
			{
				d=12;
			}
			else
			{
				d=13;
			}
		}
		else
		{
				
			d=12;	
		}
	}
	else
	{
		d=13;
	}
	cout<<d<<"."<<"09"<<"."<<n;
	
}
