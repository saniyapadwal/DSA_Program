#include<stdio.h>

void main()
{
    int n; 
    int temp;
    int a[100];

    printf("enter the no. of elements:");
    scanf("%d", &n);

    
    for (int i = 0; i <= n - 1; i++)
    {
        printf("enter the elemnet:");
        scanf("%d", &a[i]);
        printf("\n");
    } 

    
    for (int i = 1; i < n; i++)
    {
        int temp = a[i];
        int j = i - 1;
        while (a[j] >= 0 && a[j] > temp) 
        {
            a[j + 1] = a[j];
            j--;
        }               
        a[j + 1] = temp; 
    }                    
    


    printf("---elements in ascending order----\n");
    for (int i = 0; i <= n - 1; i++)
    {
        printf("%d\n", a[i]);
    }

} 