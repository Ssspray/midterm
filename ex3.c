#include <stdio.h>
int mian()
{
    unsigned long long int a,b;
    unsigned long long int max ;
    a=1;
    b=0;
    max=1;

    while (a!=0)
    {
        a<<1;
        b=b+1;
        max=max*2;
    }
    printf("%llu\n",max); 
    printf("%u\n",a);
}