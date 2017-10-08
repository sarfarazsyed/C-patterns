#include<stdio.h>
main()
{
	int n=5,i=1,j=1,k=1,l=1;
	for(i=1;i<=n;i++)
	{
		for(j=n;j>i;j--)
		{
			printf("  ");
		}
		for(j=1;j<=2*i-1;j++)
		{
			printf("%c ",65+abs(j-l));
		}
		l++;
		printf("\n");
	}
}
