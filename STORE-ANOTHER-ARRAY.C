#include<stdio.h>
main()
{
	int i,j,n,n1,sum=0;
	int a[100][100], b[100][100],c[100][100];
	
	printf(" ENTER VALUE ROW  OF A= ");
	scanf("%d",&n);
	
	printf(" ENTER VALUE COLUMN OF A= ");
	scanf("%d",&n1);
	
	for (i=0;i<n;i++)
	{
		for (j=0;j<n1;j++)
		{
			printf("a[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	for (i=0;i<n;i++)
	{
		for (j=0;j<n1;j++)
		{

			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	
	printf(" ENTER VALUE ROW  OF B= ");
	scanf("%d",&n);
	
	printf(" ENTER VALUE COLUMN OF B= ");
	scanf("%d",&n1);
	
	for (i=0;i<n;i++)
	{
		for (j=0;j<n1;j++)
		{
			printf("b[%d][%d] = ",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	
		for (i=0;i<n;i++)
		{
			for (j=0;j<n1;j++)
			{
	
				printf("%d",b[i][j]);
			}
			printf(" \n");
		}
	
	////////////////////////////////////
	
		printf("\nSUM OF TWO ARRAY \n");
		for (i=0;i<n;i++)
	{
		for (j=0;j<n1;j++)
		{
			c[i][j] = a[i][j] + b[i][j];
			printf("%d",c[i][j]);
		}
		printf("\n");
	}
	

	
}
