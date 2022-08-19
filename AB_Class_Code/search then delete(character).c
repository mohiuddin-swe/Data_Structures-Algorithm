#include <stdio.h>

int main()
{
    printf("Enter the size of an array :\n");
    int n,i,j;
    scanf("%d",&n);

    char arr[n];

                            ///            *** Traverse of the array***                   ///

    ///Loop for input all the element of array

    printf("\nEnter the array elements :\n");

    for ( i=0 ; i<n ; i++ )
    {
        scanf(" %c",&arr[i]);
    }

    ///Loop for printing out all the element of the array

    printf("\nThe array is :\n");

    for ( i=0 ; i<n ; i++ )
    {
        printf("%c\t",arr[i]);
    }


                                 ///            *** bubble Sorting The array by dccending order***                   ///

    char temp;

    ///using bubble sort to sorting the array by decending order

    for (i=0 ; i<n-1 ; i++)
    {

        for (j=0 ; j<n-i-1 ;j++)
        {
            if ( arr[j] < arr[j+1] )
            {
                 temp = arr[j+1];
                 arr[j+1] = arr[j];
                 arr[j] = temp;
            }
        }

    }
    ///Loop for printing the sorted array
     printf("\n\nThe sorted array by decending order is:\n");

        for ( i=0 ; i<n ; i++ )
        {
            printf("%c\t",arr[i]);

        }

                                 ///            ***Binary Searching a specific value location from the array***                   ///
     printf("\n\nEnter the search value :\n");
     char search;
     scanf(" %c",&search);

     int high = n-1,low = 0;
     int middle = (low+high)/2 ;

     for( i=0; low <= high; i++ )
     {
         if ( arr[middle] < search )
         {
             high = middle - 1;
         }

         else if ( arr[middle] == search )
         {
             printf("\nThe element '%c' is found at index %d\n",search,middle);
             break;
         }

         else
         {
             low = middle + 1;
         }
         middle = (low+high)/2 ;
     }
     if( arr[middle] != search )
     {
         printf("\nThe element '%c' is not found!!\n",search);
     }
 return 0;
}
