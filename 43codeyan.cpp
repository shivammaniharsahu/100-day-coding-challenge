#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
   while(t--)
   {
       int k,i,j,l,s=0,isPrime;
       cin>>k>>i;
       for(l=2;l<=i;l++)
       {
        isPrime=1;
        for(j=k+1;j<=k/2;j++)
        {
            if(l%j==0)
            {
                isPrime =0;
                break;
            }
        }
        if(isPrime==1)
        {
            s++;
        }
           if(s==i)
           {
               cout<<i<<endl;
            }
    }
}    
}
