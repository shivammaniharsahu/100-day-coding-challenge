#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
			long long int i,no,k=0,s=0,j=0,srr[32],sr[32];
			cin>>no;
			
		    for(i=0;i<32;i++)
		    {
		    	srr[i]=1;
			}	
			
			for(i=no;i!=0;i=i/2)
			{
				sr[j]=i%2;
				cout<<sr[j]<<" ";
				j++;
			}
			
			for(i=j-1;i>=0;i--)
			{
					if(sr[i]==1)
					{
						srr[k]=0;
					}
					else
					{
						srr[k]=1;
					}
					cout<<srr[k];
					k++;
			}
			
			cout<<endl;
		    for(i=0;i<32;i++)
		    {
		    	s=s+srr[i]*pow(2,i);
		    	cout<<s<<" ";
			}
			cout<<s<<"\n";
	}   
	 return 0;
}

