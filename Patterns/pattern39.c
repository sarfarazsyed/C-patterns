#include<stdio.h>
main()
{
	int n=5,i=1,j=1;
	for(i=1;i<=n;i++)
	{
		for(j=n;j>i;j--)
		{
			printf("  ");
		}
		for(j=1;j<=i*2-1;j++)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
}
