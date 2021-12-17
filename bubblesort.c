
#include<stdio.h>
main()
{
	int a[5],ele,i,j,temp;
	ele=sizeof(a)/sizeof(a[0]);
	printf("enter the element");
	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);
	for(i=0;i<ele;i++)
		printf("%d ",a[i]);
	for(i=0;i<ele-1;i++)
	{
		for(j=0;j<ele-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
		
	}
for(i=0;i<5;i++)
printf("%d ",a[i]);

	printf("\n");
	printf("next line\n");
}

