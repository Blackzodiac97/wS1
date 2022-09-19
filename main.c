#include <stdio.h>
#include <stdlib.h>

//struct section
struct product{
	char code[20];
	char nom[20];
	int quantity;
	float prix;
};
//static variable
static struct product prd[200];
static int count=0;
//fuction section
void menu(){
	int choix , prodNmb , choiceNum;
	printf("################################################################\n\n");
	printf("##                  pharmacy System Management                ##\n\n");
	printf("################################################################\n\n");
	printf("             choice one of the following options :\n\n");
	printf("1: ajouter des produit         :\n");
	printf("2: lister les produit          :\n");
	printf("3:enregistrer des vent         :\n");
	printf("4:rechercher les produit       :\n");
	printf("5:Etat de stock                :\n");
	printf("6:Alimenter le stock           :\n");
	printf("7:supprimer les produit        :\n");
	printf("8:Statistique de vente         :\n");
	printf("------------------------------------------------------------------\n");
	printf("    saisir votre choix :\n");
	scanf("%d",&choix);
	switch(choix){
		case 1 :
			system("cls"); //to clear the terminal
			printf("      choice  what you want\n");
			printf("1: ajouter un produit.\n");
			printf("2:  ajouter plusieur produiut\n");
			printf("enter votre choix :\n");
			scanf("%d",&choiceNum);
			ajoutProd(choiceNum);
			
	}
}
void ajoutProd(int prodNum){
	system("cls");
	int i;
	for(i=0;i<prodNum;i++){
		printf("product nomber %d\n",i+1);
		printf("enter the code of the product: \n");
		scanf("%s",&prd[count].code);
		printf("enter the name of the product: \n");
		scanf("%s",&prd[count].nom);
		printf("enter the quantity of the product: \n");
		scanf("%d",&prd[count].quantity);
		printf("enter the price of the product: \n");
		scanf("%f",&prd[count].prix);
		count++;
	}
	
	
}

int main(int argc, char *argv[]) {
	menu();
	return 0;
}
