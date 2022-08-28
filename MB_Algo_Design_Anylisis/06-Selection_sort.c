/*--------------------------------------------------------------------Selection Sort------------------------------------------------------


 − Set min to the first location
 − Search the minimum element in the array
 – swap the first location with the minimum value in the array
 – assign the second element as min.
 − Repeat the process until we get a sorted array.

Recommended YouTube video: https://www.youtube.com/watch?v=YepJ7fDmyjI
Code:*/
int main()
{
  // a test array and array length
  int a[] = {5, 9, 7, 6, 4, 0, 2, 3, 8, 1};
  int length = 10; 
  for (int i = 0; i < length - 1; i++)
  {
    int min_pos = i;
    for (int j = i + 1; j < length; j++)
      if (a[j] < a[min_pos]) min_pos = j; 
    if (min_pos != i)
    {
      int temp = a[i];
    a[i] = a[min_pos];
      a[min_pos] = temp;
    }
  }
  for (int i = 0; i < length; i++)
    printf("a[%d] = %d\n", i, a[i]);
  return 0;
  }