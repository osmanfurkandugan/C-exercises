#include<stdio.h>

int main(){
	
	
	int toplam=0;
	int i;
	int sayi;
	
	for(i=0;true;i++){
		printf("sayiyi giriniz: cikmak icin -1'e basiniz");
		scanf("%d",&sayi);
		
		
		if(sayi==-1){
			break;
		}
		
		toplam+=sayi;
		
		printf("toplam: %d\n",toplam);
	}
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
