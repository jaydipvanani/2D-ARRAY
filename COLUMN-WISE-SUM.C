#include<stdio.h>
 
int main()
{
    int i, j, n, n1, a[100][100], Sum=0;
    
    printf("Please Enter Number of rows and columns  :  ");
    scanf("%d %d", &n, &n1);
    
    printf("Please Enter the Matrix Row and Column Elements \n");
    
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n1; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("result   :\n");
    
	for (i=0;i<n;i++)
	{
		for (j=0;j<n1;j++)
		{

			printf("%d",a[i][j]);
		}
		printf(" \n");
	}
    
     for(j = 0; j < n1; j++)
    {
        Sum = 0;
        for(i = 0; i < n; i++)
        {
            Sum = Sum + a[i][j];
        }
        printf("The Sum of Elements of a Rows in a Matrix =  %d \n", Sum );
    }
    
    return 0;
}
