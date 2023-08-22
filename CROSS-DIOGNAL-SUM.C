#include<stdio.h>

main()
{
	int a[100][100];
	int i,j,n,n1,sum=0,sum1=0,total;
	
	printf("Enter Row size =");
	scanf("%d",&n);
	printf("Enter Column size =");
	scanf("%d",&n1);
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n1;j++)
		{
			printf("a[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n1;j++)
		{
			printf("%d",a[i][j]);
			
		}
		printf("\n");
	}
	printf("\n Result \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n1;j++)
		{
			if(i==j)
			{
				sum+=a[i][j];
			}
		}
	}
	printf("Daiognal Sum = %d\n",sum);
	
	printf("Enter Row size a =");
	scanf("%d",&n);
	printf("Enter Column size a=");
	scanf("%d",&n1);
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n1;j++)
		{
			printf("a[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n1;j++)
		{
			printf("%d",a[i][j]);
			
		}
		printf("\n");
	}
	printf("\n Result \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n1;j++)
		{
			if(i==j == (n+1)-2 )
			{
				sum1+=a[i][j];
			}
		}
	}
	printf(" anti Daiognal Sum = %d\n",sum);
	
	total=sum+sum1;
	
	printf("CROSS DIAOGNAL SUM %d= ",total);
	
	
}
