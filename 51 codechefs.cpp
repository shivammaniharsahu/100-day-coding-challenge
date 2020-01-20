#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t)
	{
		int i,j,n,ar[100000],s=0;
		cin>>n;
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
					cout<<ar[i]<<" "<<ar[j]<<endl;
				}
			}
		}
		cout<<s<<endl;
		t--;
	}
	
}
