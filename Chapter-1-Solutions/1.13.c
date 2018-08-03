#include <stdio.h>
int main()
{
    int c, No_of_words=0, Length_of_words[50],len=0, flag,i=0,j;/*declaring neccesary variables*/
    while ((c=getchar())!=EOF)/*Input every character*/
    {
        if(c!='\n'&&c!='\t'&&c!=' ')   /*calculating the length of a word*/
        len++; 
        else if(len!=0)/*will be confusing when viewed later*/
            {
                Length_of_words[i]=len;
                len=0;
                i++;
                ++No_of_words;   
            }     
    }  
    printf("The number of Words are %d\n",No_of_words);
    printf("The length of the words are\t");
    for(i=0;i<No_of_words;i++)
        printf("%d\t",Length_of_words[i]);
    printf("\n");
    int max=0;
    for(i=0;i<No_of_words;i++)
    {
        if (Length_of_words[i]>max)
            max=Length_of_words[i];
    }
    printf("\n\t");
    for(i=0;i<max;i++)
    { 
        for(j=0;j<No_of_words;j++)
        { if(max-i<= (Length_of_words[j]))
                printf("*\t");
            else
                printf(" \t");
        }
        printf("\n\t");
    }
    for(i=1;i<=No_of_words;i++)
    printf("%d\t",i);
    printf("\n");
    return 0;
}