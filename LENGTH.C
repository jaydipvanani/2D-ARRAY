#include<stdio.h>
main()
{
	int i,j,n,n1,sum=0;
	int a[100][100];
	
	printf(" ENTER VALUE ROW = ");
	scanf("%d",&n);
	
	printf(" ENTER VALUE COLUMN= ");
	scanf("%d",&n1);
	
	for (i=0;i<n;i++)
	{
		for (j=0;j<n1;j++)
		{
			printf("a[%d][%d]",i,j);
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
	
	sum=n*n1;
	printf(" LENGHTH OF ARRAY = %d",sum);
	
}
