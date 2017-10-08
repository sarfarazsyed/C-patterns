#include<stdio.h>
main()
{
	int n=5,i=1,j=1;
	for(i=n;i>=1;i--)
	{
		for(j=n;j>i;j--)
		{
			printf("  ");
		}
		for(j=1;j<=i*2-1;j++)
		{
			printf("%c ",64+i);
		}
		printf("\n");
	}
}
