#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x1 , x2 , y1 , y2 , dist;
	printf("entrer x pour la promier point :");
	scanf("%d",&x1);
	printf("entrer y pour la promier point :");
	scanf("%d",&y1);
	printf("entrer x pour la deuxieme point :");
	scanf("%d",&x2);
	printf("entrer v pour la deuxieme point :");
	scanf("%d",&y2);
	dist=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
	printf("%d",dist);
	return 0;
}
