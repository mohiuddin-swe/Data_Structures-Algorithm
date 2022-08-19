    #include <stdio.h>

    int main(){

    printf("Enter the array Elements :\n");
    int n;
    scanf("%d",&n);

    int ptr[n];
    int temp;

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

    printf("\nDecending Order Sorted Array :\n");
    for(int i=n-1; i>=0 ;i--){
        printf("%d\t",ptr[i]);
    }

    return 0;
    }
