#include <iostream>

using namespace std;

int main() {
    int n,q,i,arr[n],l,r,j,sum,a,b,k;
    cin>>n>>q;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=1;i<=q;i++)
    {
        cin>>l>>r;
        for(j=0;j<n;j++)
        {
            if(l==arr[j])
            {
                a=i;
            }
            if(r==arr[j])
            {
                b=i;
            }
        }
        sum=0;
        for(k=a;k<=b;k++)
        {
            sum+=arr[k];
        }
        cout<<sum/(b-a+1)<<endl;
    }
    return 0;
}
