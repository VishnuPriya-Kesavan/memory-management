#include<stdio.h>


struct segment{

	int start;
	int end;
	int id;

};

int main(){

	int add;
	int nos;
	int size;
	int start,end,exit=1;
	
	
	printf("Enter the Segments : ");
	scanf("%d",&nos);
	
	struct segment segment[10];
	
	printf("\n\n");
	
	for(int i=0;i<nos;i++){
		segment[i].id=i+1;
	}
	
	for(int i=0;i<nos;i++){
	printf("Address Start and End %i : ",i+1);
		scanf("%d%d",&segment[i].start,&segment[i].end);
	}
	
	printf("\n\n");
	
	while(exit){
	
		printf("Enter the address(starting address) to access : ");
		scanf("%d",&add);
		printf("Enter the Size of the data : ");
		scanf("%d",&size);	
		
		for(int i=0;i<nos;i++){
		
			if(add>=segment[i].start && add+segment[i].start<=segment[i].end){
				printf("Segment Alloted : %d\n",segment[i].id);
				break;
			}else{
				printf("Cannot Be accessed\n");
			}
		
		}

		printf("You want to exit? : ");
		scanf("%d",&exit);
	
	}

}












