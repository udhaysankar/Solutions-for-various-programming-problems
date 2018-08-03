#include <stdio.h>
int main()
{
    int c;
    while ((c=getchar())!=EOF)
    {
        if(c!='\t'&&c!='\b'&&c!='\\')
            putchar(c);
        else
        {
            if(c=='\t')
        {
            putchar(92);
            putchar('t');
        }     
        if(c=='\b')
        {
            putchar(92);
            putchar('b');
        }
        if(c=='\\')
        {
            putchar(92);
            putchar(92);
        }
        }
    }
    return 0;
}