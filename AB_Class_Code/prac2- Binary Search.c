#include <stdio.h>

int main()
{
    int n,temp;

    printf ("Enter the size of Array :\n");
    scanf("%d",&n);
    int ptr[n];

/*** Sorting Array ***/

    printf("Enter the array Elements :\n");

    for (int i=0; i<n ;i++)
    scanf("%d",&ptr[i]);

    for (int i=0; i<n; i++)
    {
        for (int j=i+1; j<n ;j++)
        {
            if( ptr[i] > ptr[j])
            {
            temp = ptr[i];
            ptr[i] = ptr[j];
            ptr[j] = temp;
            }
        }
    }

    printf("Sorted Array :\n");
    for(int i=0; i<n ;i++){
        printf("%d\t",ptr[i]);
    }

/*** Binary Search ***/

     int search;

     printf("\nEnter the value you want to find:\n");
     scanf("%d",&search);

     int low=0,high=n-1,mid;

     for(int i=0; low<=high ;i++)
    {
        mid = (low + high)/2;

        if(ptr[mid] == search)
        {
            printf("%d is found at index %d\n",search,mid);
            return 0;

        }

        if(ptr[mid] > search)
        {
            low = mid + 1;

            mid = (low + high)/2;

            if(ptr[mid] == search)
            {
            printf("%d is found at index %d\n",search,mid);
            return 0;

            }

        }

        if(ptr[mid] < search)
        {
            high = mid - 1;

            mid = (low + high)/2;

            if(ptr[mid] == search)
            {
            printf("%d is found at index %d\n",search,mid);
            return 0;

            }

        }


    }



    return 0;
}
