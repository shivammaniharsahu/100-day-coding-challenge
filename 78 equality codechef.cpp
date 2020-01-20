#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int j,i,t,n,l,ll=1,r,p=0,d=0;
	cin>>t>>n;
	long long int ar[t],po[t];
	for(i=1;i<=t;i++)
	{
		cin>>ar[i];
	}
	
	for(i=1;i<t;i++)
	{
		if(ar[i+1]>ar[i]&&d==0)
		{
			po[ll]=1;
			p=0;
			d=1;
		}
	    else if(ar[i+1]<ar[i]&&p==0)
		{
			po[ll]=-1;
			p=1;
			d=0;		
		}
		else
		{
			po[ll]=0;
		}
		++ll;
		if(i==t-1)
		{
			ll--;
		}
		
	}
	for(i=2;i<=ll;i++)
	{
		
	po[i]=po[i]+po[i-1];
		
	}
	
	for(i=1;i<=n;i++)
	{
		cin>>l>>r;			
		if(po[l]-po[r]==0)
		{
			cout<<"YES\n";
		}
		
		else
		{
			cout<<"NO\n";
		}
	}
}

