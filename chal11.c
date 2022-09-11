#include <stdio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int lon , lar , circon;
	printf("saisie la longeur :");
	scanf("%d",&lon);
	printf("saisie la largeur :");
	scanf("%d",&lar);
	circon=2*(lon+lar);
	printf("la circonferonce et : %d", circon);
	
	return 0;
}
