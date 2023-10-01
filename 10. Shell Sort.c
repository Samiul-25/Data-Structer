#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
void shellsortalgorithm(int array[], int number)
{
    int i, j, k, temp;
    for (i = number / 2; i > 0; i = i / 2)
    {
        for (j = i; j < number; j++)
        {
            for(k = j - i; k >= 0; k = k - i)
            {
                if (array[k+i] >= array[k])
                    break;
                else
                {
                    temp = array[k];
                    array[k] = array[k+i];
                    array[k+i] = temp;
                }
            }
        }
    }
}
int main()
{
    int array[30];
    int k, values;
    printf("Enter number of elements : ");
    scanf("%d", &values);
    printf("\nEnter the elements in list: ");
    for (k = 0 ; k < values; k++)
    {
        scanf("%d", &array[k]);
    }
    shellsortalgorithm(array, values);
    printf("\nArray after the sorting: ");
    for (k = 0; k < values; k++)
        printf("%d ", array[k]);
    return 0;
}
