#include<iostream>
using namespace std;
int main()
{
 	int n,ar[100],sum=0,k,l=0,t,i,j,s=0,d[100],b;
    cin>>t;
    for(k=0;k<t;k++)
    {
        cin>>ar[k];
    }
    for(i=0;i<t;i++)
    {
        j=i;
        while(ar[j]>ar[j+1]&&j>=0)
        {
            n=ar[j];
            ar[j]=ar[j+1];
            ar[j+1]=n;
            j--;
        }
        
    }
    for(i=0;i<t;i=i+k)
    {
	    	
	    b=ar[l];
	    cout<<b<<endl;
	    int c=0;
	  	for(j=0;j<t;j=j+1)
	    {
	    	 if(b==ar[j+1])
	    	{
	    		d[s]=++c;
	    	
	    		l++;
			}
			cout<<d[s]<<endl;
			
		}
		s++;
	}
	for(i=0;i<s;i++)
	{
		sum=sum+d[i];
	}
    cout<<sum;
    return 0;
}
