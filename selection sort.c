#include<stdio.h>
main()
{
	int a[50];
	int n,i,j,t=0;
	printf("Enter size of array\n");
	scanf("%d",&n);
	printf("Enter array ele\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	printf("%d",a[i]);
	printf("\n");
	
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
}
