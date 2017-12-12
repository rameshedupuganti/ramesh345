#include<stdio.h>
void main()
{
int usersize,a[20],i,search,count=0;
printf("\n enter the size of array:\t");
scanf("%d",&usersize);
printf("\n enter the elements:\t");
for(i=0;i<usersize;i++)
{
scanf("%d",&a[i]);
}
printf("enter the number to be searched:\t");
scanf("%d",&search);
count=0;
for(i=0;i<usersize;i++)
{
if(search=a[i])
{
printf("element %d is found at a position %d",search,i);
count=count+1;
break;
}
}
if (count=0)
{
printf("\n element not found");
}
}
