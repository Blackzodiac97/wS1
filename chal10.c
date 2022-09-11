#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	const float pi =3.14;
	int r ;
	float circon;
	printf("entrer le rayon de cercle :");
	scanf("%d",&r);
	circon=2*pi*r ;
	printf("%f", circon);
	return 0;
}
