/*Roll no: 62
  Batch: C
  Name: Niranjan Kumar Yadav
  Date:23/09/2023
  Description: progarmm id 21
*/


/* Bubble sorting*/
#include <stdio.h>
/*start of main method*/
void main()

{
    int n;    // variable n is used to store total elements entered by user
    int temp; // variable temp is used for swapping the postion of two values in array
    int a[100];

    printf("enter the no. of elements");
    scanf("%d", &n);

    /*asking user to enter value of every element*/
    for (int i = 0; i <= n - 1; i++)
    {
        printf("enter the elemnet:");
        scanf("%d", &a[i]);
        printf("\n");
    }

    /*bubble sorting starts */
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (a[j] > a[j + 1]) // condition for swapping the postion of two values
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        } // end of innerloop
    }     // end of outer loop

    /*printing the sorted elements*/
    printf("---elements in ascending order----\n");
    for (int i = 0; i <= n - 1; i++)
    {
        printf("%d\n", a[i]);
    }

    /*opimized way of bubble sorting*/

    // for (int i = 0; i < n - 1; i++)
    // {
    //     int flag = 0;
    //     for (int j = 0; j < n - 1; j++)
    //     {
    //         if (a[j] > a[j + 1])
    //         {
    //             temp = a[j];
    //             a[j] = a[j + 1];
    //             a[j + 1] = temp;
    //             flag = 1;
    //         }
    //     }
    //     if (flag = 0) /*tis will occur only when all elements are sorted*/
    //     {
    //         break; /*so no need to go for further comparison*/
    //     }
    // }

    // printf("---elements in ascending order----\n");
    // for (int i = 0; i <= n - 1; i++)
    // {
    //     printf("%d\n", a[i]);
    // }
}