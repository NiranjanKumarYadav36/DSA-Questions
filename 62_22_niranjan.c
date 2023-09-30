/*Roll no: 62
  Batch: C
  Name: Niranjan Kumar Yadav
  Date:23/09/2023
  Description: progarmm id 22
*/

#include<stdio.h>
/*satrt of main method*/
void main()
{
    int n; // variable n is used to store total elements entered by user
    int temp;
    int a[100];

    printf("enter the no. of elements");
    scanf("%d", &n);

    /*asking user to enter value of every element*/
    for (int i = 0; i <= n - 1; i++)
    {
        printf("enter the elemnet:");
        scanf("%d", &a[i]);
        printf("\n");
    } // end of for loop

    /*insertion sort method start */
    for (int i = 1; i < n; i++)
    {
        int temp = a[i]; // one value from unsorted subset
        int j = i - 1;
        while (a[j] >= 0 && a[j] > temp) // condition for inserting vlues in sorted subset
        {
            a[j + 1] = a[j];
            j--;
        }                // end of while loop
        a[j + 1] = temp; // inserting values in sorted subset
    }                    // end of for loop
    /*end of insertion sort method*/

    /*printing sorting values*/
    printf("---elements in ascending order----\n");
    for (int i = 0; i <= n - 1; i++)
    {
        printf("%d\n", a[i]);
    }

} /*end of main method*/