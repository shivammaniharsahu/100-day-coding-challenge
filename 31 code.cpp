#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int ar,br,l,i,n,f=0,sum,c=0,s;

	string str;
	cin>>n;
	while(n--)
	{
		cin>>ar>>br;
		s=0;
		sum=br+ar;
		str= to_string(sum);
		l=sizeof(str);
		
		for(i=0;i<l;i++)
		{
			if(str[i]=='5')
			{
				str[i]='0';
			}
			
			
		}
		cout<<str;
		cout<<endl;	
	}
	return 0;
}

