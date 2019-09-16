#include<stdio.h>
#include<stdlib.h>

#define max 10  //Maximum number of elements that can be stored

int stack[max];
int tos=-1;

void push()
{
	int data;
if (tos==max-1) //result will be shown overflow
{
printf("overflow");
}
else
{

	printf("\nEnter element to push:"); //Number of elements to push
	scanf("%d",&data);
	
tos=tos+1;
stack[tos]=data;
}

}
void pop()
{

if (tos==-1)
{
printf("underflow");  //result will be shown underflow
}
else
{
	stack[tos]=0;
	tos=tos-1;
}
}
void display()
{

int i;

if(tos==-1)
{
	printf("\nstack is empty");
}
else
{
printf("stack is ....\n");
for(i=tos;i>=0;--i)
printf("%d\n",stack[i]);
}
} 

int main()
{
	int n;
	
	while(1)
	{
		printf("\n\n1.push\n2.pop\n3.display\n4.exit");
		printf("\n\nenter your choice from 1 to 4\n");       //you will get 4 options for push,pop,display and exit.
		scanf("%d",&n);
		
		switch(n)
		{
			case 1: push();
					break;
			case 2: pop();
					break;
			case 3: display();
					break;
			case 4: exit(0);
			
			default: printf("\nWrong Choice!!"); //if you wont choose any option among 4 then result will be shown as wrong choice.
	}

}
}



