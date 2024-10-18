#include<stdio.h>
void enqueue();
void dequeue();
void display();
int max,queue[100],rear=-1,front=-1;
int main()
{
int choice=1;
printf("Circular Queue.....");
printf("Enter the size of the queue:");
scanf("%d",&max);
while(choice<4 && choice!=0)
{
printf("\n 1.Enqueue\t 2.Dequeue\t 3.Display\t 4.exit\n");
printf("Enter your Choice:");
scanf("%d",&choice);
switch(choice)
{
case 1:
		enqueue();
		break;
case 2:
		dequeue();
		break;
case 3: 
		display();
		break;
}
}
}
//Insertion
void enqueue()
{
int item;
printf("Enter the element:");
scanf("%d",&item);
if(front==-1 && rear==-1)
	{
	  front=0;
	  rear=0;
	  queue[rear]=item;
	}
else if((rear+1) % max==front))
     {
       printf("QUEUE OVERFLOW...");
     }
else
     {
       rear=(rear+1)%max;
       queue[rear]=item;
     }
     printf("VALUE INSERTED....");
}
//Deletion
void dequeue()
 {
  int item;
   if(front==-1 && rear==-1)
    {
      printf("QUEUE UNDERFLOW....");
    }
   else if(front==rear)
      {
        item=queue[front];
        front=rear-1;
        printf("VALUE DELETED...");
      }
   else
      {
       item=queue[front];
       front=(front+1)%max;
       printf("VALUE DELETED...");
      }
  }
void display()
   {
       int i=front;
     if(front==-1 && rear==-1)
       {
        printf("QUEUE IS EMPTY...");
       }
     else
        {
          printf("Queue elements are:");
         while(i<=rear)
             {
              printf("%d \t",queue[i]);
              i=(i+1)%max;
              }
         return 0;
     }
