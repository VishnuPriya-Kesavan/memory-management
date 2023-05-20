#include<stdio.h>


int block[20];
int proc[20];
int allot[20];

int main(){


	int nof,nop,count=0;
	printf("Enter the no. of frames : ");
	scanf("%d",&nof);
	
	printf("Enter the no. of pages : ");
	scanf("%d",&nop);

	for(int i=0;i<nof;i++){
		scanf("%d",&block[i]);
	}
	
	for(int i=0;i<nop;i++){
		scanf("%d",&proc[i]);
	}
	
	for(int i=0;i<nop;i++){
		for(int j=0;j<nof;j++){
		
			if(block[j]>=proc[i]){
				allot[count]=j+1;
				block[j]=block[j]-proc[i];
			  	break;
			}else{
				allot[count]=-1;
			}
			
		}
		count++;
	}
	
	for(int i=0;i<nof;i++){
	
		printf("%d\t",block[i]);
	}
	
	printf("\n\n");
	
	for(int i=0;i<nop;i++){
	
		if(allot[i]==-1){
			printf("Not Allocated\t");
		}else{
		printf("%d\t",allot[i]);}
	}



}








