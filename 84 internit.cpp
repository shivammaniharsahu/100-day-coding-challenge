#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int n,x;
    scanf("%lld", &n);
    long long int v[n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%lld", &x);
             if(i==j)
            v[i]=x;
        }
    }
    
    long long int q,sum=0;
    scanf("%lld", &q);
    while(q--)
    {
    long long int a,b,c,no;
    scanf("%lld %lld %lld%lld",&no,&a,&b,&c);
    for(int i=a-1;i<=b-1;i++)
            v[i]=v[i]^c;
    }
     for(int i=0;i<n;i++)
            sum=sum+v[i];
    printf("%lld\n",sum);
    return 0;
    
}
