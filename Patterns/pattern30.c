#include<stdio.h>
main()
{
	int n=5,i=1,j=1;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<i;j++)
		{
			printf(" ");
		}
		for(j=i;j<=n;j++)
		{
			printf("%d",n-i+1);
		}
		printf("\n");
	}
}
