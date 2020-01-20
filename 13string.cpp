#include<bits/stdc++.h>
using namespace std;
int main()
{
	int l,i,j,c=0;
	char ch[1000];
	cin.getline(ch,1000);
	l=sizeof(ch);
	for(i=0;i<l;i++)
	{
		if(ch[i+1]!='0'&&ch[i]=='S'&&ch[i+2]=='S')
		{
			cout<<ch[i];
			c++;
		}
	}
	cout<<c;
}
