#include <stdio.h>

int main(){
    int arr[15];
    int n;
    printf("Eenter total number of element you want to insert : \n");



    scanf("%d",&n);

    int newvalue,newindex;


    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }


    printf("\nEnter the value that you want to insert : \n");
    scanf("%d",&newvalue);

    printf("Enter the index that you want to insert : \n");
    scanf("%d",&newindex);

    for (int i=n-1; i>=newindex ; i--){
        arr[i+1] = arr[i];
    }
    arr[newindex] = newvalue;


    printf("After Entering new value : \n");

     for(int i=0;i<n+1;i++){
        printf("%d\t",arr[i]);
    }

    return 0;
}
