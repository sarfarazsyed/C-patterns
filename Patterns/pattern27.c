#include<stdio.h>
main()
{
	int n=5,i=1,j=1;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("%c",64+i);
		}
		printf("\n");
	}
}
