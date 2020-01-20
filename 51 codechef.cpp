#include<iostream>
using namespace std;
int main()
{
	int i,j,t,n,ar[100000],s=0;
	cin>>t;
	while(t--)
	{
		for(i=0;i<n;i++)
		{
			cin>>ar[i];		
		}	
		for(i=0;i<n;i++)
		{
			for(j=i+1;j<n;j++)
			{
				if(ar[i]+ar[j]==ar[i]*ar[j])
				{
					s=s+1;
				}
			}
		}
		cout<<s<<endl;
	}
	
}
