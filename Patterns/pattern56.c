#include<stdio.h>
main()
{
	int n=5,i=1,j=1;
	for(i=n-1;i>=-(n-1);i--)
	{
		for(j=n-1;j>=abs(i);j--)
		{
			printf("%d",abs(i)+1);
		}
		printf("\n");
	}
}
