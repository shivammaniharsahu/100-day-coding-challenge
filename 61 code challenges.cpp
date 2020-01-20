#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int i,j,k,n,ans=0;
		cin>>n;
		
		for(i=0;i<n;i++)
		{
			
			if(n<pow(2,i))
			{
				ans=pow(2,i)-n-1;
				break;
			}
		}
		if(n==2)
		{
			ans=1;
		}
		cout<<ans<<endl;
		
	}
}
