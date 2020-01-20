#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,t;
	cin>>n>>t;
	int a[n],b[n-1]={0},d=0,r=0,x=0;
	for(int i=0;i<n;i++)
	{
	    cin>>a[i];
	}
	for(int i=0;i<n-1;i++)
	{
	    if(a[i+1]>a[i]&&d==0)
	        { 
	            b[i]=1;d=1;r=0;
	        }
	        else if(a[i+1]<a[i]&&r==0)
	        { 
	           b[i]=-1;d=0;
	            r=1;
	        }
	}
	
 
for(int i=1;i<n-1;i++)
	{
	    b[i]=b[i]+b[i-1];
	}
	  
	  while(t--)
	  {
	      int g,h,o=0;
	      cin>>g>>h;
	      o=(b[h-2]-b[g-1]);
	      if(o==0)
	      cout<<"NO\n";
	      else
	      cout<<"YES\n";
	  }
	    
	return 0;
}
