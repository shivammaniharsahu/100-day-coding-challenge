#include <iostream>
using namespace std;
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
    	long int n,m,q,i,x,y,c=0,j;
        cin>>n>>m>>q;
        long long int ar[n][m];
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                ar[i][j]=0;
            }
        }
        while(q--)
        {	
            cin>>x>>y;
            for(i=0;i<m;i++)
            {
                ar[x-1][i]+=1;
            }
            for(i=0;i<n;i++)
            {
                ar[i][y-1]+=1;
            }
		}
        
        for(i=0;i<n;i++)
        {
           for(j=0;j<m;j++)
           {
               if(ar[i][j]%2==1)
               {
                   c++;
               }
           }
        }
        cout<<c<<endl;
    }
	return 0;
}
