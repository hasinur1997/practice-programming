#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
int front = -1, rear = -1, queue[SIZE];

void insert();
void del();
void display();


int main(){
	int choice;
	while(1){
		
		printf("\n\nReplay: \n \n");
		printf("1. Insert \n \n");
		printf("2. Del \n \n");
		printf("3. Display \n \n");
		printf("4. Exit \n \n");
		scanf("%d", &choice);
		
		switch(choice){
			case 1:
				insert();
				display();
				break;
			case 2:
				del();
				display();
				break;
			case 3:
				display();
				break;
			case 4:
				exit(1);
				break;
			default:
				printf("Invalid Choice..........");
		}
	}
} 


void insert(){
	if(rear == SIZE){
		printf("The queue is full");
		return;
	}else{
		int item;
		
		printf("\n\nEnter your item: \n\n");
		scanf("%d", &item);
		
		if(rear == -1 && front == -1){
			rear = 0;
			front = 0;
		}else{
			rear = rear + 1;
		}
		queue[rear] = item;
	}
}

void del(){
	if(front == -1 && rear == -1){
		printf("Queue is underflow \n\n");
	}
	
	if(front == rear){
		front = -1;
		rear = -1;
	}else{
		front = front + 1;
	}
}

void display(){
	int i;
	
	if(rear == -1){
		printf("Queue is empty...");
		return;
	}
	printf("\n\n The Queue \n \n");
	for(i=front; i<= rear; i++){
		printf("\t%d", queue[i]);
	}
}
