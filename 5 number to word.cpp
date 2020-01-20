#include<stdio.h>
int main()
{
    int i,t,n,rev=0,c=0,s=0;
    scanf("%d",&n);
    while(n!=0)
    {
        rev=rev*10+n%10;
        n/=10;
        c++;
    }
    while(rev!=0)
    {
        s++;
        switch(rev%10)
        {
            case 0:
                printf(" zero");
                break;
            case 1:
                printf(" one");
                break;
            case 2:
                printf(" two");
                break;

            case 3:
                printf(" three");
                break;
            case 4:
                printf(" four");
                break;
            case 5:
                printf(" five");
                break;
            case 6:
                printf(" six");
                break;
            case 7:
                printf(" seven");
                break;

            case 8:
                printf(" eight");
                break;

            case 9:
                printf(" nine");
                break;

        }
        rev=rev/10;
    }
    for(i=0;i<c-s;i++)
    {

        printf(" zero");
    }
}
