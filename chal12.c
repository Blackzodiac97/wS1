#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char c[3];
	printf("entrer les nomber :");
	scanf("%s",&c);
	printf("inverse est : %c%c%c",c[2], c[1],c[0]);
	return 0;
}
