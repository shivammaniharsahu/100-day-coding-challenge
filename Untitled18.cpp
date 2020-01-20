#include <iostream> 
#include <stdlib.h> 
#include <math.h> 
using namespace std;
int main( ) 
{ 
    int number,a,b,c,d,e,s=0;
    srand( 0 );
    int random;
    cout<<"1"<<endl;
    random = rand()%5;
    number = random+1;
    s=number+1;
    cout<<number<<endl;
    if(s<5)
    {
    	cout<<5-s<<endl;
		s=5;	
		random = rand()%4;
   		 number = random+1;
    	s=s+number;
		cout<<number<<endl;

	}
	else
	{
    cout<<"1"<<endl;
	random = rand()%4;
    number = random+1;
    s=s+number+1;
	cout<<number<<endl;
    	
	}
    if(s<10)
    {
    	cout<<10-s<<endl;
		s=10;	
		
	random = rand()%4;
    number = random+1;
    s=s+number;
	cout<<number<<endl;
	}
	else
	{
    	cout<<"2"<<endl;
    	
	random = rand()%4;
    number = random+1;
    s=s+number+2;
	cout<<number<<endl;
	}
    if(s<15)
    {
    	cout<<15-s<<endl;	
    	s=15;	
		random = rand()%4;
	    number = random+1;
	    s=s+number;
		cout<<number<<endl;
	}
	else if(s==15)
	{
    	cout<<"1"<<endl;
	    random = rand()%1;
	    number = random+1;
	    s=s+number+1;
		cout<<number<<endl;
		cout<<s<<endl;
	}
    if(s<20)
    {
    	cout<<20-s<<endl;
		random = rand()%4;
	    number = random+1;
	    s=s+number;
		cout<<number<<endl;	
		cout<<s<<endl;
	}
/*	random = rand()%1;
    number = random+1;
    s=s+number;
	cout<<number<<endl;
	cout<<s<<endl;*/
	
}
