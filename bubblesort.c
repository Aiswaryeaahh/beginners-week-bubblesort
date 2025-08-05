#include<stdio.h>
void main()
{
    int n;
    printf("enter the size of the array:");
    scanf("%d", &n);
    int a[n];
    int i, j, temp, flag;

    for (i = 0; i < n; i++)
    {
        printf("enter the elements: ");
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n - 1; i++)  // Outer loop for passes
    {
        flag = 0;  // Assume array is sorted before this pass

        for (j = 0; j < n - 1 - i; j++)  // Inner loop for comparisons
        {
            if (a[j] > a[j + 1])
            {
                flag = 1;
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }

        if (flag == 0)
        {
            break; // Stop if already sorted
        }
    }

    printf("the array is sorted: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}
