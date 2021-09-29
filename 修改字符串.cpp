#include <stdio.h>
int main()
{
    char c[500];
    int i;
    gets(c);
    for(i=0;c[i];i++)
    {
        if(c[i]>='A'&&c[i]<='Z')
            c[i]+=32;
    }
        puts(c);
    return 0;
}
