#include <stdio.h>
int main()
{   
    int c;
    int na=0;
    int n0=0;

    printf("This is an apple!We should eat it.");
    while ((c=getchar()) !=EOF)
    {
        if(c=='a'||c=='A')
          ++na;
        else if(c=='0')
          ++n0;
    }
    printf("The number of a is:%d\n",na);
    printf("The number of 0 is:%d\n",n0);
    return 0;
}