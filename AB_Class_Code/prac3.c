#include <stdio.h>

int main(){
    int arr[15];
    int n;
    printf("Eenter total number of element you want to insert : \n");



    scanf("%d",&n);

    int value1,value2,newindex;


    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }


    printf("\nEnter the 1st value that you want to insert : \n");
    scanf("%d",&value1);

    printf("Enter the 2nd value that you want to insert : \n");
    scanf("%d",&value2);

    printf("Enter the index that you want to insert : \n");
    scanf("%d",&newindex);



    for (int i=n-1; i>=newindex ; i--){
        //arr[i+2] = arr[i+1] = arr[i];
        arr[i+2]=arr[i];

    }
    arr[newindex] = value1;
    arr[newindex+1] = value2;


    printf("After Entering new value : \n");

     for(int i=0;i<n+2;i++){
        printf("%d\t",arr[i]);
    }

    return 0;
}
