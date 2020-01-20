#include <iostream>
using namespace std;
int main() 
{
	int t;
    cin>>t;
    while(t--)
    {
    	
   		 long long int n,m,q,i,x,y,c=0,j,l;
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
            for(l=0;l<m;l++)
            {
                ar[x-1][l]+=1;
            }
            for(l=0;l<n;l++)
            {
                ar[l][y-1]+=1;
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
