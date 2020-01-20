#include<iostream>
using namespace std;
int main()
{
	int i,j,k,n[1000],l[1000],d,c=1;
	cin>>d;
	for(i=0;i<d;i++)
	{
		cin>>n[i]>>l[i];
	}
	for(j=0;j<d;j++)
	{
		l[i]=l[i]*100;
		n[i]=2*(22/7)*n[i];
		if(l[i]>n[i])
		{
			c++;
		}
	}
	cout<<c;
	
}
