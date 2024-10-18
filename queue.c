#include<stdio.h>
int q[50],size,element,front=-1,rear=-1,i,choice,queue[100];
void enqueue();
void dequeue();
void display();
int main()
{
printf("\nQueue...");
printf("\n\n Enter the size of queue:");
scanf("%d",&size);
printf("\n 1.Enqueue\n 2.Dequeue\n 3.Display\n 4.exit\n");
while(choice!=4)
{
printf("\n Enter your choice:");
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
case 4:
	break;
default:
	printf("Invalid Choice..");
	break;
	}
}
return 0;
}
void enqueue()
{
printf("\n Enter the elements to insert:");
scanf("%d",&element);
if(rear==size-1)
{
	printf("\n Queue Overflow....");
}
else if(front==-1 && rear==-1)
{
front=0;
rear=0;
q[rear]=element;
}
else
{
	rear++;
	q[rear]=element;
}
}
void dequeue()
{
int item;
if(front==-1 || front>rear)
{
printf("Empty...");
}
else
{
item=queue[front];
front=front+1;
printf("value deleted...");
}
}
void display()
{
if(front==-1 && rear==-1)
{
printf("\n Queue Underflow");
}
else
{
printf("\n");
for(i=front;i<=rear;i++)
{
printf("%d\t",q[i]);
}
}
}


