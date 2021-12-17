#include<stdio.h>
main()
{
	int a[5],i,x,n;
	printf("Enter size of array:- ");
	scanf("%d",&n);
	
	printf("Enetr array ele:- \n");
	for(i=1;i<=n;++i)
	scanf("%d",&a[i]);
	
	printf("Enter searching ele:- ");
	scanf("%d",&x);
	printf("\n");
	
	for(i=1;i<n;++i)
	if(a[i]==x)
	break;
	
	if(i<=n)
	printf("yes position=%d ",i);
	else
	printf("not");
	
}
