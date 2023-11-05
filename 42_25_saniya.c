#include <stdio.h>

int binarysearch(int a[], int n, int d);

int main()
{

    int a[100], n, data;

    printf("enter no. of elements:");
    scanf("%d", &n);

    printf("enter element in acsending or descending order:\n");
    for (int i = 0; i < n; i++)
    {
        printf("enter element %d ", i + 1);
        scanf("%d", &a[i]);
    }

    printf("enter element to be searched\n");
    scanf("%d", &data);

    int value = binarysearch(a, n, data);

    if (value != -1) 
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

    mid = l + (r - 1) / 2;

    while (l <= r)
    {
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
    return -1;
}