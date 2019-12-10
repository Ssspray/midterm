#include <stdio.h>
#define MAXLINE 100
int main()
{
    int p;
    int q;
    int c;
    char s[MAXLINE];
    while((s[c]=getchar())!=EOF)
    {
        if(s[c]=='\n')
        {
            break;
        }
        c++;

    }
    for(c=0;s[c]!='\n';c++)
    {
        if(s[c]=='A'||s[c]=='a')
        {
            p++;
        }
        if(s[c]=='0')
        {
            q++;
        }
    }
    printf("the number of a is :%d\n",p);
    printf("the number of 0 is :%d\n",q);

    
}
