#include<stdio.h>
int main() {
    int arr[30],n,i;
    printf("How many number you want to insert in array\n");
    scanf("%d",&n);

    for ( i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }

     for ( i = 0; i < n; i++)
    {
        printf("%d no index element   is %d\n",i,arr[i]);
    }

    

    return 0;
    
}