#include<stdio.h>
# define MAX 5

int front = -1;//to track front position of queue
int rear = -1;//to track rear position of queue

int queue[MAX]; //Declare Queue of type int

void enqueue()//enqueue function to insert value in queue
{
    int val;
    if(front==-1)//make index correction for array indexing
        front = 0;
    if(rear >= MAX - 1)//check if queue is full
    {
        printf("Queue is FULL\n");
        return;
    }
    printf("Enter the value :");
    scanf("%d",&val);//input value to enqueue
    rear = rear + 1;//increment rear as inserting a value
    queue[rear] = val;//insert value into queue
    printf("%d is queued\n",queue[rear]);
}

void dequeue()    // dequeue function to remove value from queue from front
{
    if(front== -1 || front > rear)//check if queue is empty
    {
        printf("Queue is EMPTY\n");
        return;
    }
    printf("%d is dequeued\n",queue[front]);//dequeue element at the front
    front = front + 1;//update front by incrementing
}

void display() // display function to display queue
{
    int i;
    printf("\nQUEUE is \n");
    for(i=front;i<=rear;i++)
    {
        printf("%d\t",queue[i]);
    }
    printf("\n");
}

int main()
{
    int choice;//to store choice of user
    while(1)
    {
        printf("Enter the choice\n1_Enqueue\t2_Dequeue\t3_Display\t4_exit\n");
        scanf("%d",&choice); //input choice

        switch(choice)
        {
            case 1 ://insert value
                    enqueue();
                    break;
            case 2 ://take out value from front
                    dequeue();
                    break;
            case 3 ://display queue
                    display();
                    break;
        case 4:exit(0);break;
        default :
                printf("Enter the correct choice\n");
        }//end switch
    }//end while
}//end main
