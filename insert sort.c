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
	
	for(i=0;i<=n-1;i++)
	{
		j=i;
		while(j>0&&a[j-1]>a[j])
		{
			t=a[j];
			a[j]=a[j-1];
			a[j-1]=t;
			j--;
		}
	}
	for(i=0;i<=n-1;i++)
	printf("%d ",a[i]);
	
}
