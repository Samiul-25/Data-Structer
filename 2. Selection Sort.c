#include <stdio.h>
int main()
{
  int array[100], num, i, j, position, temp;
  printf("Enter number of elements: ");
  scanf("%d", &num);
  printf("Enter the elements list: " );
  for (i = 0; i< num; i++)
    scanf("%d", &array[i]);
  for (i = 0; i < num - 1; i++) // finding minimum element (num-1) times
  {
    position = i;
    for (j = i + 1; j < num; j++)
    {
      if (array[position] > array[j])
        position = j;
    }
    if (position != i)
    {
      temp = array[i];
      array[i] = array[position];
      array[position] = temp;
    }
  }

  printf("Sorted list in ascending order: ");

  for (i = 0; i < num; i++)
    printf("%d ", array[i]);

  return 0;
}
