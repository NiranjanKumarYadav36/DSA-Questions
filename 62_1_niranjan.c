/*Roll no: 62
  Batch: C
  Name: Niranjan Kumar Yadav
  Date:26/08/2023
  Description: progarmm id 1
*/

// PROGRAM TO CHECK IF A GIVEN NUMBER IS A PART OF FIBONACCI NUMBER SERIES

#include <stdio.h>
void main()
{

     int a, b, c, n;
     printf("enter the number to be checked:\n");
     scanf("%d", &n);
     a = 0;
     b = 1;

     if (n == 0)
          printf("entered number is not fibonacci:");
     c = a + b;
     while (c < n)
     {
          a = b;
          b = c;
          c = a + b;
     }
     if (c == n)
          printf("entered number is  fibonacci:");
     else
          printf("entered number is not fibonacci:");
}
