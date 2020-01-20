#include <iostream>

using namespace std;

int main() {
    int n,i=1;
    cin>>n;
   
   int sum=n;
   while(sum>=0)
   {
       sum=sum-i;
       if(sum<0)
       {
           cout<<"Patlu";
           break;
       }
       sum=sum-2*i;
    	 if(sum<0)
       {
         cout<<"Motu";  
         break;
       }
       i++;
   }
        
        return 0;
    
}
