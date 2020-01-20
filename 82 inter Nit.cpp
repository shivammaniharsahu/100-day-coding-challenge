#include<iostream>
using namespace std;
int main()
{
	long long int d,c,n,k,s,l=0,r=0,i;
	cin>>n>>k;
	long long int ar[n];
	for(i=0;i<n;i++)
	{
		cin>>ar[i];
	}
	c=n;
	d=n;
	i=0;
	while(c>0)
	{
		if(ar[i]==k||ar[n-1]==k)
		{
			if(ar[i]==k)
			{
				
			l++;
			i++;
			
			}
			else
			{
				r++;
				n=n-1;
				
			}
			c--;
			
		}
		else if(ar[i]<k)
		{
			l++;
			i++;
			c--;
			
		}
		else if(ar[n-1]<k)
		{
			r++;
			c--;
			n=n-1;
					}
		else
		{
			
			break;
		}
		
	}
	
	cout<<d-(l+r);
}
