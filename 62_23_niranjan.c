/*Roll no: 62
  Batch: C
  Name: Niranjan Kumar Yadav
  Date:11/09/2023
  Description: progarmm id 23
*/

#include <stdio.h>
void mergsort(int a[], int lb, int up);

int main()
{
    int n;
    int a[100];

    printf("Enter total elements: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d:", i + 1);
        scanf("%d", &a[i]);
    }

    mergsort(a, 0, n - 1);

    printf("Sorted elements: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}

void mergsort(int a[], int lb, int up)
{
    if (lb < up)
    {
        int mid = (lb + up) / 2;
        mergsort(a, lb, mid);
        mergsort(a, mid + 1, up);
        merge(a, lb, mid, up);
    }
}

void merge(int a[], int lb, int mid, int up)
{

    int i, j, k, b[100];
    i = lb;
    j = mid + 1;
    k = lb;

    while (i <= mid && j <= up)
    {
        if (a[i] < a[j])
        {
            b[k] = a[i];
            i++;
        }
        else
        {
            b[k] = a[j];
            j++;
        }

        k++;
    }

    if (i > mid)
    {
        while (j <= up)
        {
            b[k] = a[j];
            j++, k++;
        }
    }
    else
    {
        while (i <= mid)
        {
            b[k] = a[i];
            i++, k++;
        }
    }

    for (k = lb; k <= up; k++)
    {
        a[k] = b[k];
    }
    
}
