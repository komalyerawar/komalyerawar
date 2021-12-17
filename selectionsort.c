
#include<stdio.h>
#include<stdlib.h>
main()
{
int a[5],ele,i,j,temp;
ele=sizeof(a)/sizeof(a[0]);
printf("enter the element");
for(i=0;i<ele;i++)
scanf("%d",&a[i]);
for(i=0;i<5;i++)
printf("%d",a[i]);
printf("\n");
for(i=0;i<ele;i++)
{
for(j=i+1;j<ele-1;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
for(i=0;i<ele;i++)
{
printf("%d ",a[i]);
}
printf("\n");
printf("Dummy");
}


