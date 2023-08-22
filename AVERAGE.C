#include<stdio.h>
main()
{
	int a[100][100];
    int i,j,n,n1;
    float average,sum=0;
    
    printf("Enter the number of rows and columns\n");
    scanf("%d%d",&n,&n1);
    
   
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<n1;j++)
        {
        	 printf("a[%d][%d]\n",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("The elements in the matrix are\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n1;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n1;j++)
        {
            sum=sum+a[i][j];
        }
    }
    average=sum/(n*n1);
    printf("\nAverage of all the elements of the matrix = %.2f",average);
}

