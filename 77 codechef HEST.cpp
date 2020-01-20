#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,arr[1000000],br[100000],s,ar[8],i,k=1,pos[100000],l=1,f,j,a[10],po;
	int arrr[8];
	for(i=1;i<=8;i++)
	{
		arrr[i]=0;
	}

	for(i=1;i<=8;i++)
	{
		cin>>ar[i];
		
	 } 
	 cin>>n;
	 for(i=1;i<=n;i++)
	 {
	 	cin>>arr[i]>>br[i];
	 	pos[k++]=arr[i];
	 	pos[k++]=br[i];
	 	if(i==n)
	 	{
	 	    k--;
	 	}
	 }
	 for(i=1;i<=k;i++)
	 {
	     for(j=1;j<=8;j++)
	     {
	         if(pos[i]==j)
	         {
	             
	         arrr[j]=1+arrr[j];
	         }
	     }
	 }
	 for(i=1;i<=8;i++)
	 {  
	 	 if(arrr[i]<1)
		  {
		  	a[l]=i;
		  	l++;
		 }	
	 }
	  if(ar[arr[1]]<ar[br[1]])
	 {
	 	s=ar[br[1]];
	 }
	 else
	 {
	 		s=ar[arr[1]];
	 }
	 for(i=2;i<=n;i++)
	 {
	 	if(arr[i]!=br[i-1])
	 	{
	 		if(ar[arr[i]]<ar[br[i]])
	 		{
	 			s=s+ar[br[i]];
				 
			 }
			 else
			 {
			 	s=s+ar[arr[i]];
			 }
		 }
	 }
	 
	 for(i=1;i<l;i++)
	 {
	 	s=s+ar[a[i]];
	 }
	cout<<s;
}
