#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	float f , c ;
	printf("entrer la temperature en F : ");
	scanf("%f", &f);
	c = (f-32)/1.8;
	printf("la temperature en C et : %f \n" ,c);
	if(c>=40){
		printf("la sensation ressentie : tres chaud");
    }else if(c>20){
    	printf("la sensation : chaud");
	}else if(c>0){
		printf("la sensation : froid");
	}else{
		printf("la sensation : tres froid");
	}
    	
}


