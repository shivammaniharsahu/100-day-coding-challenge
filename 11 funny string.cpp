#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k[1000],n,l[1000],s=0,t,o,v;
    char str[1000], temp;
    cin>>t;
    for(o=0;o<t;o++)
    {  
    	cin.ignore();
        cin.getline(str,100);
        n = strlen(str)-1;
        for( i=0,j =n; i < n ; i++,j--)
        {
            l[i]=abs(str[i]-str[i+1]);   
            k[i]=abs(str[j]-str[j-1]);
            
        }
        for( v=0; v < n ; v++)
        {
            if(l[v]==k[v])
            {
                s++;
            }
        }  
        if(s==n)
        {
            cout<<"Funny\n";
        }
        else
        {
            cout<<"Not Funny\n";
        }
    }
     return 0; 
}

