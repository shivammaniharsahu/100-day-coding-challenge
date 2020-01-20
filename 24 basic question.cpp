#include <iostream>
using namespace std;
int main() 
{
	int N = 0;
    cin>>N;
    long data[N];
    for(auto i=0; i<N; i++)
        cin>>data[i];
     long long number=0,k=1;
    for(int j=0;j<N;j++)
    {
        int a= data[j]%10;
        number+=a;
        number=number*10;
        
    }
    number=number/10;
    if(number%10==0)
    {
       cout<<"Yes";  
    }
    else
    {
        cout<<"No";
    }    
    return 0;
}
