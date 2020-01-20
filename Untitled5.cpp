#include<iostream>
#include<math.h>
using namespace std;
int ncr(int);
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int i,n,sb=0,sa=0,max,min,sum=0;
		
        cin>>n;
        string cha,chb;
        cin.ignore(1);
        getline(cin,cha);
        getline(cin,chb);
        for(i=0;i<n;i++)
        {
            if(cha[i]=='1')
            {
                sa++;
            }
            if(chb[i]=='1')
            {
                sb++;
            }

        }
        cout<<sa<<" "<<sb<<" ";
        max=sa+sb;
        cout<<max<<" ";
        if(max>n)
        {
        	max=2*n-max;
		}
		
        min=abs(sb-sa);
       cout<<min<<" ";
        
        for(i=max;i>=min;i-=2)
        {
          
            sum=sum+(ncr(n) / (ncr(i) * ncr(n - i)));
        }
        cout<<sum<<endl;
    }
}
int ncr(int m)
{
    int p=1;
    for(int j=m;j>0;j--)
    {
        
        p=p*j;
    }
    return p;
}
