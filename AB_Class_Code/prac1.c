#include <stdio.h>

int main(){
    int arr[15];
    int n;
    printf("Eenter total number of element you want to insert : \n");



    scanf("%d",&n);

    //home work : how to fix overflow if n=20

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }

    return 0;
}
