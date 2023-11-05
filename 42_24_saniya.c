#include <stdio.h>

void quicksort(int a[], int lb, int up);
int partition(int a[], int lb, int up);

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

    quicksort(a, 0, n - 1);

    printf("Sorted elements: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}


void quicksort(int a[], int lb, int up)
{
    if (lb < up)
    {
        int location = partition(a, lb, up);
        quicksort(a, lb, location - 1);
        quicksort(a, location + 1, up);
    }
}

int partition(int a[], int lb, int up)
{
    int pivot = a[lb];
    int start = lb;
    int end = up;

    while (start < end)
    {
        while (a[start] <= pivot)
        {
            start++;
        }
        while (a[end] > pivot)
        {
            end--;
        }

        if (start < end)
        {
            int temp = a[start];
            a[start] = a[end];
            a[end] = temp;
        }
    }

    int temp = a[lb];
    a[lb] = a[end];
    a[end] = temp;

    return end;
}