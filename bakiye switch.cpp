#include<stdio.h>

int main() {
	
	int islem;
	int bakiye=1000;
	int tutar;
	
	printf("Islemler\n1:para cekme\n2:para yatirma\n3:havale yapma\n4:bakiye sorgulama\n5:Kart iade\n\n\n");
	
	printf("islemi seciniz:");
	scanf("%d",&islem);
	
	
	switch(islem){
		
		case 1 : 
			printf("bakiyeniz: %d\n",bakiye);
			printf("cekilecek tutar:");
			scanf("%d",&tutar);
			if(tutar>bakiye){
			
			printf("bakiye yetersiz");
			}
			
			bakiye-=tutar;
			printf("bakiyeniz: %d",bakiye);
		
		case 2:
			
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
