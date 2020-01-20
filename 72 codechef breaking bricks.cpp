#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int s,i,w1,w2,w3,sum1,sum2,sum3;
		cin>>s>>w1>>w2>>w3;
		sum1=w1+w2;
		sum2=w3+w2;
		sum3=w1+w2+w3;
		if(s>=sum3)
		{
			cout<<"1\n";
		}
		else if(sum1<=s||sum2<=s)
		{
			cout<<"2\n";
		}
		else
		{
			cout<<"3\n";
		}
		
	}
	return 0;
}
