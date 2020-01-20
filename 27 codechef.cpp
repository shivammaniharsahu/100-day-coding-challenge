#include<bits/stdc++.h>
using namespace std;
int main()
{
	long t;
	cin>>t;
	while(t--)
	{
		long long int a,b,c,d,pr,count=0;
		for(int i=2;i<=a;i++)
		{
			for(int j=2;j<=c;j++)
			{
				pr=((i-1)*(j-1));
				d=sqrt(pr);
				if(pr==1)
				continue;
				else
				if(isPerfectSquare(pr))
				{
					count+=d-1;
				}
					else
					{
						count+=d;
					}
				}
			
			}
				cout<<count<<endl;
		}
	}
	return 0;
}
