#include<stdio.h>

int main(){
	
	int a=1;
	int b=1;
	int i;
	
	
	printf("%d\n%d\n",a,b);
	
	for(i=0;i<12;i++){
		
		int x = b;
		b +=a;
		a=x;
		
		
		printf("%d\n",b);
	} 
	
	
	
	
	
	
	
	return 0;
}
