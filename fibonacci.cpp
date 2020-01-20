#include<iostream>
using namespace std;
int main()
{
	int t1,t2,n,i,t3;
	cin>>t1>>t2>>n;
	int nxt,f=t1,s=t2;
	for(i=t1;i<n-1;i++)
	{
		
		nxt=f+s;
		f=s;
		s=nxt;
	}
	cout<<nxt;
	return 0;
}
