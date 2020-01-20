#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i,j,q,a,b,c,qq,e,sum,l,k;
    scanf("%d",&n);
    long long int ar[n][n];
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {    
            scanf("%d",&ar[i][j]);    
        }
    }
    scanf("%d",&q);
    for(i=1;i<=q;i++)
    {
        long long int sum=0;
        scanf("%d %d %d %d",&e,&a,&b,&c);
        if(e==1)
        {
                for(i=a;i<=b;i++)
                {
                    for(j=1;j<=n;j++)
                    {
                        ar[i][j]=ar[i][j]^c;
                        
                    }
                }    
        }
        else if(e==2)
        {
                
            for(i=1;i<=n;i++)
            {
                for(j=a;j<=b;j++)
                {
                    ar[i][j]=ar[i][j]^c;
        
                }
            }    
        }
        
    for(l=1;l<=n;l++)
    {
        for(k=1;k<=n;k++)
        {
            if(l==k)
            sum=sum+ar[l][k];
        }
        
        
    }
    printf("%d\n",sum);
    }
    

}
