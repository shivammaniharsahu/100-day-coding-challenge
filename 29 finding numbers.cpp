#include<iostream>
using namespace std;
int main()
{
	int i,j,k,l,n,rem,c=0,s=0,t;
	cin>>t;
	for(i=0;i<t;i++)
	{
		
		cin>>n;
		c=n;
		s=0;
		while(n!=0)
		{
			rem=n%10;
			if(c%rem==0)
			{
				s++;
			}
			n=n/10;
			
		}
		cout<<s<<endl;
	}
	return 0;
}
