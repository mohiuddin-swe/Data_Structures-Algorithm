#include<stdio.h>
int main()
{
    int i,n=5,flag=1,s_value;
    int arr[5];
    printf("Enter 5 numbers\n");
    for (i = 0; i < n; i++)
    {
       scanf("%d",&arr[i]); 
    }
     printf("Which value you want to search\n");
     scanf("%d",&s_value);
    
    for(i=0;i<n;i++) {
        if (arr[i]==s_value) {
            printf("Search value has been found at %d\n",i);
            flag=1;
            break;
            } 

         if(flag==0){
         printf("Not found");
         }   
       
    }
    

    return 0;

}