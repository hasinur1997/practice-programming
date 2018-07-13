#include<stdio.h>
int main(){
	
	int frame[100], page_size, frame_size, front = -1, rear = -1, i, j;
	
	// Input for page table size
	printf("Enter page table size:\n");
	scanf("%d", &page_size);
	
	// Input tatal number of frame
	printf("Enter total number of frame:\n");
	scanf("%d", &frame_size);
	
	//Input all the frame
	printf("Enter values of frame:\n");
	for(i=0; i<frame_size; i++){
		scanf("%d", &frame[i]);
	}
	
	// Print all frame
	printf("Frame:\n");
	for(i=0; i<frame_size; i++){
		printf("%d\t", frame[i]);
	}
	
	// Create Page Table
	int page_table[page_size];
	for(i=0; i<page_size; i++){
		
		if( rear <= page_size ){
			// Replace the table value
			for(j=page_size; j<frame_size; j++){
				if(page_table[i] == frame[j]){
					break;	
				}else{
					page_table[front] = frame[j];
					front = front + 1;
				}
			}
		}else{
			// Insert value into page table
			if(front == -1 && rear == -1){
				front = 0;
				rear = 0;
			}else{
				rear = rear+1;
			}
			
			page_table[rear] = frame[i];
		}
			
	}

	// Print Page Table
	printf("The page table:\n");
	for(i=0; i<page_size; i++){
		printf("%d\t", page_table[i]);	
	}

	return 0;
}
