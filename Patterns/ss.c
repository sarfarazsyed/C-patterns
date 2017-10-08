#include<stdio.h>
main()
{
	int n=5,i=1,j=1;
	for(i=n;i>=-n;i--)
	{
		for(j=n;j>abs(i);j--)
		{
			printf("  ");
		}
		for(j=n;j>=abs(i);j--)
		{
			printf("* ");
		}
		printf("\n");
	}
}
