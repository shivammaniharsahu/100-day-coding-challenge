#include<iostream>
using namespace std;
int main()
{
	int i,j,s,t,a[100],c=0;
	cout<<"Enter length of array =";
	cin>>s;
	cout<<"Enter your arry element =\n";
	for(i=0;i<s;i++)
	{
		cin>>a[i];
	}
	
	printf("Steps of insertion  sort is\n");
	for(i=0;i<s-1;i++)
	{
		j=i;
		while(a[j]>a[j+1]&&j>=0)
		{
			t=a[j];
			a[j]=a[j+1];
			a[j+1]=t;
			j--;
			c++;	
		}
		
		printf("Step %d",i+1);
			for(j=0;j<s;j++)
			{
				cout<<a[j]<<" ";
			}
		
	}
	
	printf("your sorted array using selection sort is\n");
			for(j=0;j<s;j++)
			{
				cout<<a[j]<<" ";
			}
			
	
}
























