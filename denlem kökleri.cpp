#include<stdio.h>
#include<math.h>



int main () {
	
	int a,b,c;
	float x1,x2;
	float delta;
	
	
	printf("denklemin a'sini giriniz:");
	scanf("%d",&a);
	printf("denklemin b'sini giriniz:");
	scanf("%d",&b);
	printf("denklemin c'sini giriniz:");
	scanf("%d",&c);
	
	delta = b*b-4*a*c;
	
	x1=( -b + (sqrt(delta))  ) / 2*a;
	x2=( -b - (sqrt(delta))  ) / 2*a;
	
	printf("denklemin birinci koku: %2.f, denlemin ikinci koku %2.f", x1,x2);
	
	
	
	return 0;
}
