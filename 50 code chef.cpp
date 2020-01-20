#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
			int ar[]={1,2,3,4,5,6,7,8},arr[8],sum=0,j;
			
			int i,n;
			for(i=0;i<8;i++)
			{
				arr[i]=0;
			}
			cin>>n;
			int a[n],b[n];
			for(i=0;i<n;i++)
			{
				cin>>a[i]>>b[i];
			}
			for(i=0,j=0;i<11;i++,j++)
			{
				if(a[i]==9||a[i]==10||a[i]==11)
				{
					continue;
				}
				else if(ar[j]==a[i])
				{
					if(arr[j]<b[i])
					{
						arr[j]=b[i];	
					}	
				}
			}
			for(j=0;j<8;j++)
			{
				sum=sum+arr[j];
			}
			cout<<sum<<endl;
				
	}
}
