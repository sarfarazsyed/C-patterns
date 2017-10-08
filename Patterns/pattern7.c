#include<stdio.h>
main()
{
	int n=5,i=1,j=1;
	for(i=1;i<=n;i++)
	{
		for(j=n;j>0;j--)
		{
			printf("%d",j);
		}
		printf("\n");
	}
}
