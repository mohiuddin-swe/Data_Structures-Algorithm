/*--------------------------------------------------------Binary search-----------------------------------------------------------
Binary search is implemented using the following steps...
Step 1 - Read the search element from the user.
Step 2 - Find the middle element in the sorted list.
Step 3 - Compare the search element with the middle element in the sorted list.
Step 4 - If both are matched, then display "Given element is found!!!" and terminate the function.
Step 5 - If both are not matched, then check whether the search element is smaller or larger than the middle element.
Step 6 - If the search element is smaller than the middle element, repeat steps 2, 3, 4, and 5 for the left sublist of the middle element.
Step 7 - If the search element is larger than the middle element, repeat steps 2, 3, 4, and 5 for the right sublist of the middle element.
Step 8 - Repeat the same process until we find the search element in the list or until the sublist contains only one element.
Step 9 - If that element also doesn't match with the search element, then display "Element is not found in the list!!!" and terminate the function
You may follow the below youtube video (0.00-18.00 minutes). No need to exceed 18.00 minutes
https://www.youtube.com/watch?v=V_T5NuccwRA


Simplified Code:*/
#include <stdio.h>
int main()
{
  int c, first, last, middle, n, search, array[100];
  printf("Enter number of elements\n");
  scanf("%d", &n);
  printf("Enter %d integers\n", n);
  for (c = 0; c < n; c++)
    scanf("%d", &array[c]);
  printf("Enter value to find\n");
  scanf("%d", &search);
  first = 0;
  last = n - 1;
  middle = (first+last)/2;
  while (first <= last) {
    if (array[middle] < search)
      first = middle + 1;
    else if (array[middle] == search) {
      printf("%d found at location %d.\n", search, middle+1);
      break;
    }
    else
      last = middle - 1;
    middle = (first + last)/2;
  }
  if (first > last)
    printf("Not found! %d isn't present in the list.\n", search);
  return 0;
}