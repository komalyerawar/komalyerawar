#include<stdio.h>
main()
{
	int a[100];
	int n,i,j,t=0;
	printf("Enter array size\n");
	scanf("%d",&n);
	printf("Enter array ele\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	printf("%d",a[i]);
	printf("\n");
	
	for(i=0;i<n-i;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
}
