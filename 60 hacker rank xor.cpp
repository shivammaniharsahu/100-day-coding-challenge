#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int i,j,n,s=0;
		cin>>n;
		for(i=0;i<=n;i++)
		{
			
			j=n^i;
			if(n+i==j)
			{
				s++;
				cout<<n+i<<" "<<j<<"\n";
			}
		}
		cout<<s<<endl;
	}
}
