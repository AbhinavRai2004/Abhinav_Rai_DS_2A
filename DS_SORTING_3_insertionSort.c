#include <stdio.h>

void insertionSort(int arr[], int n)
{
    for (int itr = 1; itr <= n - 1; itr++)
    {
        for (int j = itr -1; j>=0; j--)
        {
            if (arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
            else{
                break;
            }
        }
    }

    printf("The sorted array will be\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}
void main()
{
    int a[50], n;
    printf("Enter the value of n\n");
    scanf("%d", &n);
    printf("Enter the elements of array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    insertionSort(a, n);
}