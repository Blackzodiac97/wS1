#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float C ,F ;
	printf("saisie la temperature en C : ");
	scanf("%f", &C);
	F=(C*1.8)+32;
	printf("saisie la temperature en C : %f", F);
		return 0;
		}
