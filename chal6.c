#include <stdio.h>
#include <stdlib.h>

int main(){
	float f , c ;
	printf("entrer la temperature en F : ");
	scanf("%f", &f);
	c = (f-32)/1.8;
	printf("la temperature en C et : %.3f \n" ,c);
}
