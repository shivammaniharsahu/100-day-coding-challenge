#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
			int arr[8],sum=0,j,i,n;
			for(j=1;j<=8;j++)
			{
				arr[j]=0;
			}
			cin>>n;
			int a[n],b[n];
			for(i=0;i<n;i++)
			{
				cin>>a[i]>>b[i];
			}
			for(i=0;i<n;i++)
			{
					for(j=1;j<=8;j++)
					{
						if(j==a[i])
						{	
							if(arr[j]<b[i])
							{
								arr[j]=b[i];	
							}	
						}
					}
				
			}
			for(j=1;j<=8;j++)
			{
				sum=sum+arr[j];
			}
			cout<<sum<<endl;		
	}
}
