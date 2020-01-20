#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int j,i,t,n,ar[1000000],l,r,ne=0,po=0;
	cin>>t>>n;
	for(i=1;i<=t;i++)
	{
		cin>>ar[i];
	}
	for(i=1;i<=n;i++)
	{
		cin>>l>>r;
		ne=0;
		po=0;
		
		for(j=l;j<=r-1;j++)
		{
		    
			cout<<ar[l]<<" "<<ar[l+1]<<endl;
			
		 	if(ar[l]-ar[l+1]<0&&ar[l+1]-ar[l+2]>0)
			{
				++ne;
			}
			else if(ar[l]-ar[l+1]>0&&ar[l+1]-ar[l+2]<0)
			{
				++po;	
			}
			++l;
		}
		cout<<ne<<" "<<po<<"\n";
		if(ne==0&&po==0)
		{
			cout<<"NO\n";
		}
		else if(ne==po)
		{
			cout<<"YES\n";
		}
		else
		{
			cout<<"NO\n";
		}
	}
}
