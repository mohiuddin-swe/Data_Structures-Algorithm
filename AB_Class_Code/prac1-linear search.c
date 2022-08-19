//Linear search
#include <stdio.h>

int main(){

    printf("Enter How many elements you want to Enter : \n");
    int n;
    scanf("%d",&n);

//Loop for Entering n size elements

    int arr[n];
    for (int i=0; i<n ; i++){
        scanf("%d",&arr[i]);
    }

    printf("Enter the value you want to search :\n");
    int search,i;
    scanf("%d",&search);


//Loop for searching the specific value

    for (i=0; i<n ; i++){

        if( arr[i] == search ){
            printf("\n%d is Found at index %d\n",search,i);
            break;
        }
    }

    if( i == n){

        printf("\nElement not Found\n");
    }


    return 0;

}
