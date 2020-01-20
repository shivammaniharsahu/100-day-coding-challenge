#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k,l,n;
	string str,str1;
	getline (cin, str);
	cin>>n; 
	l=str.length();
	for(i=0;i<l;i++)
	{
		if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
    {
    	str1[i]=str[i]+n;
    }
    else if(str[i]>= '0' && str[i]<= '9')
    {
    	str1[i]=str[i]+n;
    }
    else
    {
    	str1[i]=str[i];
    }
	}
	for(i=0;i<l;i++)
	{
		cout<<str1[i];	
	}
	
}
