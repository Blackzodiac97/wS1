#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int a , b ,opera ;
   
	printf("saisie la premier nomber :");
	scanf("%d", &a);
	printf("saisie la deuxieme nomber :");
	scanf("%d", &b);
	printf("entrer operator :\n1:+\n2:-\n3:*\n4:/\n5:%%\n");
	scanf("%d",&opera);
	if(opera == 1){
		printf(" resultat :%d",a+b);
	}else if(opera == 2){
		printf("resultat :%d", a-b);
	}else if(opera == 3){
		printf("resultat :%d", a*b);
	}else if(opera == 4){
		printf("resultat :%d", a/b);
	}else if(opera == 5){
		printf("resultat :%d", a%b);
	}
		
	return 0;
}
