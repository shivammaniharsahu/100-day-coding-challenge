#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		
		long int n,i,p,k,s=1,min,c,j,minn,ar[1000];
		cin>>n;
		for(i=0;i<n;i++)
		{
			cin>>ar[i];
		}
		min=ar[0];
		for(i=0;i<n;i++)
		{
			if(min>ar[i]&&i<5)
			{
				min=ar[i];
				s++;
			}
			else if(i>=5)
			{
				j=i;
				minn=ar[j];
				c=0;
				while(j>=i-5)
				{
					if(minn<ar[j])
					{
						c++;
					}
					j--;
				}
				if(c==5)
				{
					s++;
				}
			}
		}
		cout<<s<<endl;
	}
}
