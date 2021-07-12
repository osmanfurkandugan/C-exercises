#include<stdio.h>

int main(){
	
	int vize1,vize2,final;
	float dersort;
	
	
	printf("1. vizenizi girin:");
	scanf("%d",&vize1);
	printf("2. vizenizi girin:");
	scanf("%d",&vize2);
	printf("finalinizi girin:");
	scanf("%d",&final);
	
	dersort = (vize1+vize2+final)/3.0;
	
	if(dersort>60) {
		
		printf("derten gectiniz");
	}
	else if(dersort>50){
		printf("bute kaldiniz");
	}
	else{
		printf("dersten kaldiniz");
	}
	
	
	
	
}
