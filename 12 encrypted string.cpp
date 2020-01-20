#include<bits/stdc++.h>
using namespace std;
int main()
{
	int l,i,j,n,up,lo,k=0;
	char str[10000],str1[100][100];
	cin.getline(str,10000);
	l=strlen(str);
	lo=sqrt(l);
	up=lo+1;
	
	for(i=0;i<=lo;i++)
	{
		for(j=0;j<=lo;j++)
		{
		
			str1[i][j]=str[k];
			k++;
			
		}
	}
	for(j=0;j<=lo;j++)
	{
		for(i=0;i<=lo;i++)
		{
			if(str1[i][j]=='\0')
			{
				i++;
			}
			else
			{
				cout<<str1[i][j];
			}
			
		}
		cout<<" ";
	}
	return 0;
}
