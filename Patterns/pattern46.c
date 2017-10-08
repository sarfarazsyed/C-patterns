#include<stdio.h>
main()
{
	int n=5,i=1,j=1,k=1;
	for(i=1;i<=n;i++)
	{
		for(j=n;j>i;j--)
		{
			printf("  ");
		}
		for(j=i-1;j>=-(i-1);j--)
		{
			printf("%c ",64+i-abs(j));
		}
		printf("\n");
	}
}
