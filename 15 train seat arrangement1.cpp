#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,n,t,k,j,s;
	cin>>n;
	if(n<=12)
	{
		s=13-n;
		cout<<s;
		k=abs(s-n);
		if(k==11||k==1)
		{
			cout<<" Window Seat";
		}
		
		else if(k==9||k==3)
		{
			cout<<" Middle Seat";
		}
		else if(k==7||k==5)
		{
			cout<<" Aisle Seat";
		}
	}
	
	else if(n<=24)
	{
		s=37-n;
		cout<<s;
		k=abs(s-n);
		if(k==11||k==1)
		{
			cout<<" Window Seat";
		}
		
		else if(k==9||k==3)
		{
			cout<<" Middle Seat";
		}
		else if(k==7||k==5)
		{
			cout<<" Aisle Seat";
		}
	}
	
	else if(n<=36)
	{
		s=61-n;
		cout<<s;
		k=abs(s-n);
		if(k==11||k==1)
		{
			cout<<" Window Seat";
		}
		
		else if(k==9||k==3)
		{
			cout<<" Middle Seat";
		}
		else if(k==7||k==5)
		{
			cout<<" Aisle Seat";
		}
	}
	
	else if(n<=48)
	{
		s=85-n;
		cout<<s;
		k=abs(s-n);
		if(k==11||k==1)
		{
			cout<<" Window Seat";
		}
		
		else if(k==9||k==3)
		{
			cout<<" Middle Seat";
		}
		else if(k==7||k==5)
		{
			cout<<" Aisle Seat";
		}
	}
	
	else if(n<=60)
	{
		s=109-n;
		cout<<s;
		k=abs(s-n);
		if(k==11||k==1)
		{
			cout<<" Window Seat";
		}
		
		else if(k==9||k==3)
		{
			cout<<" Middle Seat";
		}
		else if(k==7||k==5)
		{
			cout<<" Aisle Seat";
		}
	}
	
	else if(n<=72)
	{
		s=133-n;
		cout<<s;
		k=abs(s-n);
		if(k==11||k==1)
		{
			cout<<" Window Seat";
		}
		
		else if(k==9||k==3)
		{
			cout<<" Middle Seat ";
		}
		else if(k==7||k==5)
		{
			cout<<" Aisle Seat";
		}
	}
	else if(n<=84)
	{
		s=157-n;
		cout<<s;
		k=abs(s-n);
		if(k==11||k==1)
		{
			cout<<" Middle Seat ";
		}
		
		else if(k==9||k==3)
		{
			cout<<" Middle Seat";
		}
		else if(k==7||k==5)
		{
			cout<<" Aisle Seat";
		}
	}
	else if(n<=96)
	{
		s=181-n;
		cout<<s;
		k=abs(s-n);
		if(k==11||k==1)
		{
			cout<<" Window Seat";
		}
		
		else if(k==9||k==3)
		{
			cout<<" Middle Seat";
		}
		else if(k==7||k==5)
		{
			cout<<" Aisle Seat";
		}
	}
	else if(n<=108)
	{
		s=205-n;
		cout<<s;
		k=abs(s-n);
		if(k==11||k==1)
		{
			cout<<" Window Seat";
		}
		
		else if(k==9||k==3)
		{
			cout<<" Middle Seat ";
		}
		else if(k==7||k==5)
		{
			cout<<" Aisle Seat";
		}
	}	
	
	
	return 0;
}
