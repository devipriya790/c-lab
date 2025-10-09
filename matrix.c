#include<stdio.h>
void main()
{
	int a[10][10],b[10][10],c[10][10],row,col,i,j;
	printf("Enter the row and column:");
	scanf("%d %d",&row,&col);
	printf("Enter the elements of matrix A|n:");
	for(i=0;i<row;++i)
	for(i=0;j<col;j++)
	{
		scanf("d",&a[i][j]);
	}
	printf("Enter the elements of matrix B|n:");
	for(i=0;j<row;i++)
	for(j=0;j<col;j++)
	{
		scanf("%d",&b[i][j]);
	}
	for(i=0;i<row;i++)
	for(j=0;j<col;j++)
	{
		c[i][j]=a[i][j]+b[i][j];
	}
	printf("The resultant matrix C|n:");
	for(i=0;j<col;i++)
	{
		for(j=0;j<col;j++)
	{
    	printf("%d|t",c[i][j]);
	}
	printf("|n");
    }
    getch();
}
