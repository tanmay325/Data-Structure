#include<stdio.h>
#include<conio.h>
#define MAX 5
int stack[MAX];
int top = -1;

void push();
void pop();
void display();

void main()
{
	int ch;
	clrscr();
	while(ch)
	{
		printf("\n1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT\n");
		printf("\n Enter your choice :");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:push();
			break;

			case 2:pop();
			break;

			case 3:display();
			break;

			case 4:exit(0);
			break;

			default:printf("\nEnter choice from 1 to 4 \n");
			break;
		}
	}
	getch();
}
void push()
{
	int number;
	int i;
	if(top==(MAX-1))
	printf("\nStack Overflow");
	else
	{
		printf("\nEnter Element: ");
		scanf("%d",&number);
		top=top+1;

		stack[top]=number;
		printf("\nElement inserted =%d and in location=%d",number ,top);

	}
}
void pop()
{
	int number,i;
	if(top==-1)
	printf("\nStack underflow");
	else
	{
		number=stack[top];
		printf("\nEnter deleted =%d and location =%d",number,top);
		top=top-1;
	}
 }
void display()
{
	int i;
	if(top==-1)
	printf("\nStack is Empty");
	else
	{
		for(i=top;i>=0;i--)
		{
			printf("\nElement = %d",stack[i]);
		}
	}
}
