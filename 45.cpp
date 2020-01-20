#include<iostream>
using namespace std;
int main()
{
	int ar[1000],br[1000],n,i,j,max,diff[1000],f;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>ar[i]>>br[i];
		if(ar[i]>br[i])
		{
			diff[i]=ar[i]-br[i];	
		}
		else
		{
			diff[i]=br[i]-ar[i];
		}
	}
	max=diff[0];
	for(i=0;i<n;i++)
	{
		if(max<diff[i])
		{
			max=diff[i];
			if(ar[i]-br[i]>0)
			{
				f=1;
			}
		}
	}
	if(f==1)
	{
		cout<<"1 ";
	}
	else
	{
		cout<<"2 ";
	}
	cout<<max;
	return 0;
}

