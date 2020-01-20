// C++ program to find the element 
// occurring odd number of times 
#include <bits/stdc++.h> 
using namespace std; 
  
// Function to find element occurring 
// odd number of times 
int main() 
{ 
    char ar[10];
    int i,n;
    int res = 0;
    cin>>n;
    string str;
    cin>>str;
    for (i = 0; i < n; i++)
	{
		res = res ^ str[i];
	}     
	printf("%c",res);	  
} 
