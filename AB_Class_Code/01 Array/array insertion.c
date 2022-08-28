#include <stdio.h>
#define size 15

int pos,data;
int arr[size];
int i,n=10;
int ent;

void insertion();
void creating();
void print();

int main()
{


    printf("Enter 10 element in the array :\n");
    for (i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    print();

        insertion();
        creating();
    insertion();
    creating();
    insertion();
    creating();

    print();


return 0;
}

void insertion()
{

    printf("Enter the position of new element :");
    scanf("%d",&pos);
    printf("\nEnter the data: ");
    scanf("%d",&data);
    printf("\n");
}

void creating()
{
n++;
    for(i=n-1;i>=pos-1;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[pos-1]=data;
    printf("\n");
}

void print()
{
    printf("All the elements in the array is: \n");
    for (i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
}
