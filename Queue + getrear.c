#include <stdio.h>
#include <stdlib.h>
int max=20,front=-1,rear=-1;
int stack[20];
int isfull()
{
    if(rear==(max-1))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isempty()
{
    if(rear==-1&&front==-1)
    {
        return 1;
    }
    else
    {
       return 0;
    }
}
int enqueue(int val)
{
    if(isempty)
    {
        front=0;
        rear = rear + 1;
        stack[rear]=val;
    }
    else
    {
        printf("queue is overflow ");
    }
}
int dequeue()
{
    if(isfull)
    {
        front=0;
        int data=stack[front];
        printf(" the dequeue element is %d",data);
        front=front+1;
         return data;

    }
    else
    {
         printf("queue is underflow ");
    }
}
void getrear()
{
    {
    if (isfull)
    {
        printf("The rear element is : %d", stack[rear]);
    }
    else
    {
        printf("queue is empty");
    }
}
}
void display() {
    if (isfull) {
      printf ("queue elements are: ");
        for (int i = front; i <=rear; i++)
           printf ("%d ",stack[i]);

    }
    else
    {
        printf( "queue is empty" );
    }
}
void peek()
{
    if (isfull)
    {
        printf("The front element is : %d", stack[front]);
    }
    else
    {
        printf("queue is empty");
    }
}
int main()
{
    int x;
   printf("1) DisplayQueue \n");
    printf("2) enqueue \n");
    printf("3) dequeue \n");
    printf("4) peek \n");
    printf("5) getrear \n");
    printf("6) EXIT \n");
    while (x != 6)
    {
        printf("\nEnter choice: ");
        scanf("%d",&x);

         if (x == 1)
        {
            display();

        }
        else if (x == 2)
        {
            int y;
            printf("Enter enqueue number :  ");
            scanf("%d",&y);
            enqueue(y);
            display();

        }
        else if (x == 3)
        {
            dequeue();

        }
        else if (x == 4)
         {
             peek();
         }
        else if (x == 5)
        {
            getrear();
        }
         else if (x == 6)
        {
            return 0;
        }
        else
        {
           printf("Invalid Choice ....Try again....\n");

        }
    }


    return 0;
}
