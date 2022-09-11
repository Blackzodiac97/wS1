#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a ,b ,c ,d ;
	float somme, moyenne ;
	printf("entrer le a :");
	scanf("%d", &a);
    printf("entrer le b :");
	scanf("%d", &b);	
	printf("entrer le c :");
	scanf("%d", &c);
	printf("entrer le d :");
	scanf("%d", &d);
	somme=a+b+c+d;
	moyenne=somme/3;
	printf("la somme est : %f \n",somme);
	printf("la moyenne est : %f", moyenne);
	return 0;
}
