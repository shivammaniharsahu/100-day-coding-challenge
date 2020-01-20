#include<iostream>
using namespace std;
int main()
{
	int i,ar[1000],f=0,s=0,k,j,l;
	char ch[10];
	cin.getline(ch,10);
	if(ch[2]!='A'&&ch[2]!='I'&&ch[2]!='O'&&ch[2]!='E'&&ch[2]!='Y'&&ch[2]!='U')
	{
			
		if((ch[0]+ch[1])%2==0&&(ch[3]+ch[4])%2==0&&(ch[4]+ch[5])%2==0&&(ch[7]+ch[8])%2==0)
		{
			cout<<"valid";
		}
			
		else
		{
			cout<<"invalid";
		}
	}
	else
	{
		cout<<"invalid";
	}
	
}
