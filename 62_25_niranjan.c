/*Roll no: 62
  Batch: C
  Name: Niranjan Kumar Yadav
  Date:15/10/2023
  Description: progarmm id 25
*/

#include <stdio.h>

// Function prototype for binarysearch
int binarysearch(int a[], int n, int d);

// start of main method
int main()
{

    int a[100], n, data;

    printf("enter no. of elements");
    scanf("%d", &n);

    printf("warning:\n");
    printf("enter element in acsending or descending order:\n");
    for (int i = 0; i < n; i++)
    {
        printf("enter element %d ", i + 1);
        scanf("%d", &a[i]);
    }

    // asking for which element to be  searched
    printf("enter element to be searched\n");
    scanf("%d", &data);

    // Checking if the returned index is not -1
    int value = binarysearch(a, n, data);

    if (value != -1) // Check if the returned index is not -1
    {
        printf("%d is present in the array at index %d\n", data, value);
    }
    else
    {
        printf("%d is not found in the array\n", data);
    }

    return 0;
}

int binarysearch(int a[], int n, int d)
{
    int l, r, mid;

    l = 0;
    r = n - 1;

    

    // start of while loop
    while (l <= r)
    {
			
		 mid =(l+r)/2;
        if (d == a[mid])
        {
            return mid;
        }
        else if (d < a[mid])
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    // end of while loop
    return -1;
}