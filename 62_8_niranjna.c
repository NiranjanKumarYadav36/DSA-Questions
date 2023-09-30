/*Roll no: 62
  Batch: C
  Name: Niranjan Kumar Yadav
  Date:26/08/2023
  Description: progarmm id 8
*/

/*Write a function that compares two arrays and returns 1 if they are identical and 0 otherwise*/

#include <stdio.h>
int areArraysIdentical(int arr1[], int arr2[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr1[i] != arr2[i])
        {
            return 0; // Arrays are not identical
        }
    }
    return 1; // Arrays are identical
}

int main()
{
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {1, 2, 3, 4, 5};

    int size = sizeof(arr1) / sizeof(arr1[0]);

    int result = areArraysIdentical(arr1, arr2, size);

    if (result)
    {
        printf("The arrays are identical=1.\n");
    }
    else
    {
        printf("The arrays are not identical=0.\n");
    }

    return 0;
}
