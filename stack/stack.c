#include<stdio.h>
#include<stdlib.h>
#define SIZE 10

int stack[SIZE], top = -1;

void push();
void pop();
void display();

int main(){
	int choice;
	while(1){
		printf("\nEnter your choice: \n\n");
		printf("1. Push\n\n");
		printf("2. Pop\n\n");
		printf("3. Display\n\n");
		printf("4. Exit\n\n");
		scanf("%d", &choice);
		
		switch(choice){
			case 1:
				push();
				display();
				break;
			case 2:
				pop();
				display();
				break;
			case 3:
				display();
				break;
			case 4:
				exit(1);
				break;
			default:
				printf("Invalid Choice...");
		}
	}
}

void push(){
	int item;
	
	if(top == SIZE){
		printf("Stack is overflow");
	}else{
		printf("Enter your item: ");
		scanf("%d", &item);
		if(top == -1){
			top = 0;
		}else{
			top = top + 1;
		}
		
		stack[top] = item;
	}
}

void pop(){
	int item;
	
	if(top == -1){
		printf("Stack is underflow");
	}else{
		item = stack[top];
		top--;
	}
}

void display(){
	int i;
	if(top == -1){
		printf("Stack is empty");
		return;
	}
	printf("\n The Stack \n\n");
	for(i=top; i>=0; i--){
		printf("\t%d\n", stack[i]);
	}
}
