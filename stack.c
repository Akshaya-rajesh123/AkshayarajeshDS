#include<stdio.h>
int stack[10],i,top=-1,x,n;
void push();
void pop();
void show();
int main()
{
printf("Enter the size of Stack:");
scanf("%d",&n);
while(1)
{
printf("Choose the operation:\n");
printf("1.push\n 2.pop\n 3.show\n....");
printf("Enter the operation");
scanf("%d",&x);
switch(x)
{
case 1:
	  push();
	  break;
case 2:
      pop();
	  break;
case 3:
	  show();
	  break;
case 4:
	  break;
default:
       printf("Enter a valid choice:");
}
}
return 0;
}
void push()
{
int val;
if(top==n-1)
{
printf("Stack Overflow...\n");
}
else
{
printf("Enter the element to be pushed:");
scanf("%d",&val);
top=top+1;
stack[top]=val;
}
}
void pop()
{
if(top==-1)
{
printf("Stack Underflow....\n");
}
else
{
printf("Element is poped%d\n",stack[top]);
top=top-1;
}
}
void show()
{
printf("Elements in the stack are:");
for(i=top;i>=0;i--)
{
printf("\n");
printf("%d\n\n",stack[i]);
}
}

