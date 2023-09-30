/*Roll no: 62
  Batch: C
  Name: Niranjan Kumar Yadav
  Date:26/08/2023
  Description: progarmm id 2
*/

/*Write a C program to generate Pascal Triangle using array.*/

#include<stdio.h>

int factorial(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    return n * factorial(n - 1);
}

int main()
{
    int numRows;
    printf("Enter the number of rows for Pascal's Triangle: ");
    scanf("%d", &numRows);

    for (int i = 0; i < numRows; i++)
    {
        for (int space = 0; space < numRows - i; space++)
        {
            printf(" ");
        }
        for (int j = 0; j <= i; j++)
        {
            int coefficient = factorial(i) / (factorial(j) * factorial(i - j));
            printf("%d ", coefficient);
        }
        printf("\n");
    }

    return 0;
}
