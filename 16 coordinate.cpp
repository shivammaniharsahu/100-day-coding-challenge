#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j=0,k=0,n,s;
	char ar[1000];
	cin.getline(ar,1000);
	s=strlen(ar);
	for(i=0;i<s;i++)
	{
		if(ar[i]=='L')
		{
			j--;
		}
		else if(ar[i]=='R')
		{
			j++;
		}
		
		else if(ar[i]=='D')
		{
			k--;
		}
		
		else if(ar[i]=='U')
		{
			k++;
		}
	}
	cout<<j<<" "<<k;
	return 0;
}
