/*------------------------------------------------------------------Queue--------------------------------------------------------

Queue operations work as follows:
two pointers FRONT and REAR
FRONT track the first element of the queue
REAR track the last element of the queue
initially, set value of FRONT=0 and REAR to -1
Enqueue Operation
check if the queue is full
increase the REAR index by 1
add the new element in the position pointed to by REAR
Dequeue Operation
check if the queue is empty
Print the value pointed by FRONT
increase the FRONT index by 1
Recommended video: https://www.youtube.com/watch?v=zp6pBNbUB2U
Code:*/
#include<stdio.h>

int ourQueue[5];
int front = 0, rear = -1, totalItem = 0;

void enqueue(){
    int item;
    if(totalItem>=5){
        printf("Sorry, the Queue is full.\n");
    }else{
        printf("Please enter the new item:");
        scanf("%d",&item);
    rear = (rear + 1) % 5;
    ourQueue[rear] = item;
    totalItem++;
    }

}

void dequeue(){
    if(totalItem<=0){
        printf("Sorry, the Queue is empty.\n");

    }else{
        printf("The popped element is.%d\n",ourQueue[front]);

    ourQueue[front] = 0;
    front = (front + 1) % 5;
    totalItem--;

    }

}

void show(){
    int i;
    printf("Queue: ");
    for (i = 0; i < 5; i++){
        printf("%d ", ourQueue[i]);
    }
    printf("\n");
}

int main(){
    int ch;
    while (1)
    {
        printf("1.Enqueue Operation\n");
        printf("2.Dequeue Operation\n");
        printf("3.Display the Queue\n");
        printf("4.Exit\n");
        printf("Enter your choice of operations : ");
        scanf("%d", &ch);
        switch (ch)
        {
            case 1:
            enqueue();
            break;
            case 2:
            dequeue();
            break;
            case 3:
            show();
            break;
            case 4:
            exit(0);
            default:
            printf("Incorrect choice \n");
        }
    }

    return 0;
}