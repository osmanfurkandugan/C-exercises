#include<stdio.h>

void hatayibas (int hata){
	printf("hata kodu %d",hata);
}

int main() {
	
	
	int sayi;
	
	printf("lutfen pozitif sayi girin:");
	scanf("%d",&sayi);
	
	if(sayi <0){
		
		hatayibas(404);
	}
	else  {
		
		printf("tebrikler");
	}
	
	
	
	
	return 0;
}
