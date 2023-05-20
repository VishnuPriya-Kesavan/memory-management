#include<stdio.h>


int main(){


	int nof,pf=0,nor;
	
	int ref[30];
	
	int frames[30];
	
	printf("Enter the no. of frames : ");
	scanf("%d",&nof);
	
	printf("Enter the no. of reference string : ");
	scanf("%d",&nor);
	
	printf("Enter the ref string\n");
	
	for(int i=0;i<nor;i++){
		scanf("%d",&ref[i]);
	}
	
	int inc=0;
	
	int temp=0;
	
	for(int i=0;i<nor;i++){
		if(inc<nof){
			frames[inc]=ref[i];
			inc++;
			pf++;
		}
	}
	int flag=0;
	
	for(int i=nof;i<nor;i++){
		
			for(int j=inc-1;j>=inc-nof;j--){
				if(frames[j]==ref[i]){
					flag=1;
					break;
				}else{
					flag=0;
				}
				
			}
			
			if(flag==0){
				pf++;
				frames[inc]=ref[i];
				inc++;		
			}
	}
	printf("Page Faults : %d",pf);

}





