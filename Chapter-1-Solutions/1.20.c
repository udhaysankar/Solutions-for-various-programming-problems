#include<stdio.h>
void detab(char s1[],char s2[],int);/*declaring the functions for getting input and removing tabs-replace blanks*/
void getinput(char temp[]);
int main()
{
    int c, i=0, tab_width ;  
    char a[100],b[100];
    printf("Enter the No. of blanks to be substituted for blanks\n");/*To get the number of blanks, a tab has to be replaced with*/
    scanf("%d",&tab_width);
    printf("enter the text below:\n");
    getinput(a);/*gets the input in the string a*/
    detab(a,b,tab_width);/*removes the tabs and replaces them with blanks*/
    printf("detab result:\n%s\n",b);/*prints the detab_output*/
    return 0;
}
void detab (char s1[], char s2[], int n1)
{ 
    int i=0,j=0,c=0;
    while(s1[i]!='\0')
    {
        if(s1[i]!='\t')
        {
         s2[c]=s1[i];
         i++;
         c++;
        }
        else
        {
            j=0;
            while(j<n1)
            {
                s2[c+j]=' ';
                j++;
            }
            c=c+n1;
            i++;
        }
           
    }
    s2[c]='\0';
}
void getinput(char temp[])
{
    int c, i=0;
while((c=getchar())!=EOF)
    {
        temp[i]=c;
        i++;
    }
    temp[i]='\0';
}