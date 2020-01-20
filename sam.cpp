#include <iostream>

using namespace std;

int main() {
    int N,t,i;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>N;
        while(N!=1)
        {
            if(N%2==0)
            {
                N=N/2;
            }
            else
            {
                N=3*N+1;
            }
        }
        if(N==1)
        {
          cout<<"YES"<<endl;  
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
