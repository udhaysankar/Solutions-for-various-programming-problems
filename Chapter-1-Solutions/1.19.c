#include<stdio.h>
#define out_word 0
#define in_word 1 
void reverse(char string[]);
int main()
{
    char a[100],temp [20], r[100];
    int c, i=0, len, flag=in_word,j;
    printf("Enter the line\n");
    while ((c=getchar())!=EOF&&c!='\n')
    {
        a[i]=c;
        i++;
    }
    reverse(a);
    printf("%s\n",a);
} 
    

void reverse(char string[])
{
    int i=0,j=0;
    while (string[j]!='\0')
     j++;
     
    char swap;
    while(i<j/2)
    {
        swap=string[i];
        string[i]=string[j-i-1];
        string[j-i-1]=swap;
        i++;
    }
}