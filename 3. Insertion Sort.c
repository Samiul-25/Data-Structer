#include <stdio.h>
int main(void)
{
    int num, i, j, temp;
    int arr[64];
    printf("Enter number of elements: ");
    scanf("%d", &num);
    printf("Enter the element list: ");
    for (i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 1; i < num; i++)
    {
        j = i;
        while (j > 0 && arr[j - 1] > arr[j])
        {
            temp = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = temp;
            j--;
        }
    }
    printf("Sorted list in ascending order: ");
    for (i = 0; i < num; i++)
    {
        printf("%d  ", arr[i]);
    }
    return 0;
}
