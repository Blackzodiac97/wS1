#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int metre;
	double  km,mile;
	printf("saisir la distance en metre :");
	scanf("%d",&metre);
	km=metre/1000;
	mile=km/1.609;
	printf("la distance en mile est : %f",mile);
	return 0;
}
