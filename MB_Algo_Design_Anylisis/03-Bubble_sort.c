/*Working of Bubble Sort
Suppose we are trying to sort the elements in ascending order. 
1. First Iteration (Compare and Swap)
Starting from the first index, compare the first and the second elements.
If the first element is greater than the second element, they are swapped.
Now, compare the second and the third elements. Swap them if they are not in order.
The above process goes on until the last element.
2. Remaining Iteration
The same process goes on for the remaining iterations.

**After each iteration, the largest element among the unsorted elements is placed at the end.
You may follow the below youtube video (0.00-10.00 minutes)

https://www.youtube.com/watch?v=YqzNgaFQEh8


Simplified Code:*/

#include <stdio.h>
int main()
{
  int array[100], n, c, d, swap;
  printf("Enter number of elements\n");
  scanf("%d", &n);
  printf("Enter %d integers\n", n);
  for (c = 0; c < n; c++)
    scanf("%d", &array[c]);
  for (c = 0 ; c < n - 1; c++)
  {
    for (d = 0 ; d < n - c - 1; d++)
    {
      if (array[d] > array[d+1]) /* For decreasing order use '<' instead of '>' */
      {
        swap       = array[d];
        array[d]   = array[d+1];
        array[d+1] = swap;
      }
    }
  }
  printf("Sorted list in ascending order:\n");
  for (c = 0; c < n; c++)
     printf("%d\n", array[c]);  return 0;
}