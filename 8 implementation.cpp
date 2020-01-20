#include<bits/stdc++.h>
using namespace std;
int reverse(int);
int main()
{
    int a,ar,c,e,n,i,j,k,s=0,br,d;
    double f;
    scanf("%d",&i);
    scanf("%d",&j);
    scanf("%d",&k);
    c=j-i;
    for(n=0;n<=c;n++)
    {    
        ar=i++;
        cout<<ar<<":\n";
        e=reverse(ar);
        a=abs(ar-e);
        f=double(a)/double(k);
        cout<<f<<endl;
        br=a/k;
        if(br==f)
        {
        	s++;
        }

    }
    printf("%d",s);
    return 0;
}
int reverse(int b)
{
	int rev=0;
	while(b!=0)
    {
        rev=rev*10+b%10;
        b/=10;
    }
    return rev;
}
