//deletion by array index

#include <stdio.h>

int main(){
    int arr[15];
    int n, newindex,newindex2;
    printf("Eenter total number of element you want to insert : \n");

    scanf("%d",&n);

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }

    printf("\nEnter the new index :\n");
    scanf("%d",&newindex);

    printf("\nEnter the new index :\n");
    scanf("%d",&newindex2);


    for (int i=newindex; i<n-1 ; i++){
        arr[i] = arr[i+1];

    }

    for (int i=newindex2-1; i<n-2 ; i++)
    {
        arr[i] = arr[i+1];
    }

    for (int i=0; i<n-2 ; i++){
         printf("%d\t",arr[i]);
    }



    return 0;
}
