#include <stdio.h>
#define inside_word 1
#define outside_word 0
int main()
{
    int c,flag=inside_word;
    printf("Start typing...(don't let the first letter as space)\n");
    while ((c=getchar())!=EOF)
    {
        if(c=='\t'||c==' ')
        {
            while (flag==inside_word)
            {
                putchar('\n');
                flag=outside_word;
            }
        }
        else
        {
            putchar(c);
            flag=inside_word;
        }
    }
    return 0;
}