/*Roll no: 62
  Batch: C
  Name: Niranjan Kumar Yadav
  Date:23/09/2023
  Description: progarmm id 29
*/

#include <stdio.h>


void main()
{
    int a[100], n;
    printf("enter no. of elements:");
    scanf("%d", &n);

    printf("enter elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        int min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[min])
            {
                min = j;
            }
        }

        if (a[min] != a[i])
        {
            int temp = a[i];
            a[i] = a[min];
            a[min] = temp;
        }
    }

    printf("ascending order is:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }
}
