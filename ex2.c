#include <stdio.h>
int main()
{
    char x[7];
    int y;
    int z=0;
    for(y=0;y!=EOF;y++)
    {
        x[y]=getchar();
        if (x[y]=='\n')
            break;
        z=(z*10)+(x[y]-'0');
    }