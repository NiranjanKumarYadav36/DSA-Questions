/*Roll no: 62
  Batch: C
  Name: Niranjan Kumar Yadav
  Date:26/08/2023
  Description: progarmm id 9
*/

/*Write a program in C to count the total number of duplicate elements in an array.*/

#include <stdio.h>

int countDuplicateElements(int arr[], int size)
{
    int count = 0;

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                break; // Once a duplicate is found, move to the next element
            }
        }
    }

    return count;
}

int main()
{
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter elements of the array:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    int duplicateCount = countDuplicateElements(arr, size);

    printf("Total number of duplicate elements: %d\n", duplicateCount);

    return 0;
}
