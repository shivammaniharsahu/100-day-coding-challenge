#include<bits/stdc++.h>
#include<math.h>

#define ll long long 
using namespace std;
const int n = 1000001; 



// array to store inverse of 1 to N 
ll factorialNumInverse[n + 1]; 
  
// array to precompute inverse of 1! to N! 
ll naturalNumInverse[n + 1]; 
  
// array to store factorial of first N numbers 
ll fact[n + 1]; 






 
void InverseofNumber(ll p) 
{ 
    naturalNumInverse[0] = naturalNumInverse[1] = 1; 
    for (int i = 2; i <= n; i++) 
        naturalNumInverse[i] = naturalNumInverse[p % i] * (p - p / i) % p; 
} 
// Function to precompute inverse of factorials 
void InverseofFactorial(ll p) 
{ 
    factorialNumInverse[0] = factorialNumInverse[1] = 1; 
  
    // precompute inverse of natural numbers 
    for (int i = 2; i <= n; i++) 
        factorialNumInverse[i] = (naturalNumInverse[i] * factorialNumInverse[i - 1]) % p; 
} 
  
// Function to calculate factorial of 1 to N 
void factorial(ll p) 
{ 
    fact[0] = 1; 
  
    // precompute factorials 
    for (int i = 1; i <= n; i++) { 
        fact[i] = (fact[i - 1] * i) % p; 
    } 
} 
  
// Function to return nCr % p in O(1) time 
ll Binomial(ll n, ll R, ll p) 
{ 
    // n C r = n!*inverse(r!)*inverse((n-r)!) 
    ll ans = ((fact[n] * factorialNumInverse[R]) 
              % p * factorialNumInverse[n - R]) 
             % p; 
    return ans; 
} 
  
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int i,n,sb=0,sa=0,max,min,sum=0,bino;
		 ll p = 1000000007; 
    	InverseofNumber(p); 
    	InverseofFactorial(p); 
    	factorial(p); 
        cin>>n;
        string str1,str2;
        cin>>str1;
        cin>>str2;
        
        for(i=0;i<n;i++)
        {
            if(str1[i]=='1')
            {
                sa++;
            }
            if(str2[i]=='1')
            {
                sb++;
            }

        }
        max=sa+sb;
        if(max>n)
        {
        	max=n-(max%n);
		}
		
        min=abs(sb-sa);
      
        
        for(i=max;i>=min;i-=2)
        {
          bino=Binomial(n, i, p) ;
            sum=sum+bino;
        }
        if(sb+sa==2*n)
        {
        	sum=1;
		}
        cout<<sum<<endl;
    }
}


  
