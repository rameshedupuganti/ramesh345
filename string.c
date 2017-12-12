#include<stdio.h>
void main()
{
char a[30];
int i,l=0;
printf("\n enter a word\n");
scanf("%s",a);
for(i=0;a[i]!='\0';i++)
{
l++;
}
printf("\n the length string is %d",l);
}
