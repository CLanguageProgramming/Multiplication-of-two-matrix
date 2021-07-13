#include <stdio.h>
int main()
{
  printf("Multiplication of 2 Matrix\n");
  printf("Enter The number of Rows:-> ");
  int row=0;
  scanf("%d", &row);
  printf("Enter the number of Columns:-> ");
  int col=0;
  scanf("%d", &col);
  int i;
  int j;
  int a[100][100];
  int b[100][100];
  int c[100][100];
  //Matrix 1 Entered by user
  for(i=0;i<row;i++)
  {
    for(j=0;j<col;j++)
    {
      printf("Enter the Element%d%d:-> ", i+1, j+1);
      scanf("%d" &a[i][j]);
    }
  }
  printf("You have entered\n");
  for(i=0; i <= row- 1;i++)
    {
        for(j=0;j <= col- 1;j++)
        {
            printf("%d ",a[i][j]);
            if(j == col- 1)
            {
                printf("\n");
            }
        }
  }
  //Matrix 2 Entered by user
  int row1;
  int col1;
  row1 = col;
  printf("Enter number of Column:-> ");
  scanf("%d", &col1);
  for(i=0;i<row1;i++)
  {
    for(j=0;j<col1;j++)
    {
      printf("Enter the Element%%d:-> ", i+1, j+1);
      scanf("%d" &b[i][j]);
    }
  }
  printf("You have entered\n");
  for(i=0; i <= row1- 1;i++)
    {
        for(j=0;j <= col1- 1;j++)
        {
            printf("%d ",b[i][j]);
            if(j == col1- 1)
            {
                printf("\n");
            }
        }
   }
}
