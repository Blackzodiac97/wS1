#include <stdio.h>
#include <stdlib.h>

//struct section
struct product{
	char code[20];
	char nom[20];
    float prix;
	int quantity;

};
//static variable
static struct product prd[200];                 //where we stock product
static int count=0;                              //how many product we added
//fuction section
void menu(){             //menu
	int choix , prodNmb , choiceNum;
	printf("#################################################################\n");
	printf("##                  pharmacy System Management                 ##\n");
	printf("#################################################################\n\n");
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
 			// system("cls"); //to clear the terminal
			printf("      choice  what you want\n");
			printf("1: ajouter un produit.\n");
			printf("2: ajouter plusieur produiut\n");
			scanf("%d",&choiceNum);
			if(choiceNum==1){
			  	ajoutProd(1);
			}else if(choiceNum>1){
			printf("saisir le nomber de produit:\n");
			scanf("%d",&prodNmb);
			ajoutProd(prodNmb);
			}
			menu();
			break;
		case 2:
			printf("      choice  what you want\n");
			printf("1: lister par prix.\n");
			printf("2: lister par alphabe\n");
			scanf("%d",&choiceNum);
			if(choiceNum==1){
			    listParPrix();
			}else if(choiceNum==2){
			    listParNom();
			}
			break;
		case 3:
//			acheterPrd();
        case 4:
            SearchByCode();
	}
}
void listParPrix(){                                                      //listing by price
    struct product copy[count];
	int i, j;
	for(i = 0; i < count; i++){
		for(j = i+1; j < count; j++){
			if(prd[i].prix < prd[j].prix){
				copy[i]= prd[j];
				prd[j] = prd[i];
				prd[i] = copy[i];
			}
		}
	}
	printf("-----------------------------------\n");
    printf("Code          |  Name        |  Price        |     QuantitY\n");
    for(i=0; i<count; i++){
    
    printf("      %s     |  %s        |   %.2f        | %d     \n",prd[i].code,prd[i].nom,prd[i].prix,prd[i].quantity);
    
    }
	
}
//void listParPrix(){                                                           
//    int i, j, tmp;
//    struct product copy[count];
//    for(i=0;i<count;i++){
//        for(j= i + 1;j<count;j++){
//            if(prd[i].prix<prd[j].prix){
//                //NAME
//                strcpy(copy[i].nom,prd[i].nom);
//                strcpy(prd[i].nom,prd[j].nom);
//                strcpy(prd[j].nom,copy[i].nom);
//                //code
//                strcpy(copy[i].code,prd[i].code);
//                strcpy(prd[i].code,prd[j].code);
//                strcpy(prd[j].code,copy[i].code);
//            // QUANTITY
//                copy[i].quantity=prd[i].quantity;
//                prd[i].quantity=prd[j].quantity;
//                prd[j].quantity=copy[i].quantity;
//                
//                tmp=prd[i].prix;
//                prd[i].prix=prd[j].prix;
//                prd[j].prix=tmp;
//            
//            }
//        }
//    }
//    printf("-----------------------------------\n");
//    printf("Code       |  Name      |  Price      |    QuantitY\n");
//    for(i=0; i <count; i++){
//    
//    printf("      %s     |  %s        |   %.2f        | %d     \n",prd[i].code,prd[i].nom,prd[i].prix,prd[i].quantity);
//    
//    }
//    }


void listParNom(){                                                     //listing by name
   struct product copy[count];
    int i,j;
    
    for(i=0;i<count;i++)
	{
        for(j=i+1;j<count;j++){
        if(strcmp(prd[i].nom,prd[j].nom)>0)
			{
              copy[i]=prd[i];
              prd[i]=prd[j];
              prd[j]=copy[i];
            }
    	}
	}
	printf("-----------------------------------\n");
    printf("Code       |  Name      |  Price      |    QuantitY\n");
    for(i=0; i <count; i++){
    printf("      %s     |  %s        |   %.2f        | %d     \n",prd[i].code,prd[i].nom,prd[i].prix,prd[i].quantity);
    
    }
}

//void listParNom(){                                                              
//    struct product copy[count];
//    int i,j;
//    for(i=0;i<count;i++){
//        for(j=i+1;j<count;j++){
//            if(strcmp(prd[i].nom,prd[j].nom)>0){
//                //NOM
//                strcpy(copy[i].nom,prd[i].nom);
//                strcpy(prd[i].nom,prd[j].nom);
//                strcpy(prd[j].nom,copy[i].nom);
//                 //code
//                strcpy(copy[i].code,prd[i].code);
//                strcpy(prd[i].code,prd[j].code);
//                strcpy(prd[j].code,copy[i].code);
//                // QUANTITY
//                copy[i].quantity=prd[i].quantity;
//                prd[i].quantity=prd[j].quantity;
//                prd[j].quantity=copy[i].quantity;
//                //PRICE
//                copy[i].prix=prd[i].prix;
//                prd[i].prix=prd[j].prix;
//                prd[j].prix=copy[i].prix;
//            }
//        }
//    }
//      printf("-----------------------------------\n");
//    printf("Code       |  Name      |  Price      |    QuantitY\n");
//    for(i=0; i <count; i++){
//    
//    printf("      %s     |  %s        |   %.2f        | %d     \n",prd[i].code,prd[i].nom,prd[i].prix,prd[i].quantity);
//    
//    }
//  }


void ajoutProd(int prodNum){  //ajouter produit
//  	system("cls");
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

//void acheterPrd(){
////    system("cls");
//    printf("============== You are about to buy a new product ==============\n");
//     int i ;
//    char tmpCode[20];
//    
//    printf("Enter the code of the product: ");
//    scanf("%s",tmpCode); 
//    
//    for (i = 0; i < count; i++){
//        if ( strcmp(prd[i].code,tmpCode) == 0 ){
//           
//                printf("The product you are about to buy is %s and the quantity is: %d\n", prd[i].nom,prd[i].quantity);
//                int tmpQantity = 0;
//                printf("Give the quantity you want to buy: ");
//                scanf("%d", &tmpQantity);
//                if ( tmpQantity <= prd[i].quantity){
//                    
//                    prd[i].quantity -= tmpQantity;
                    
//                    ///showing time
//                         time_t t = time(NULL);
//                        struct tm *tm = localtime(&t);
//                       
//                        size_t ret = strftime(products[numberOfProducts].time, sizeof(products[numberOfProducts].time), "%c", tm);
//                        assert(ret);
//                     } else
//                    printf("Quantity not avalaible\n");
//        }else if ( strcmp(prd[i].code,tmpCode) != 0 ){
//        	
//            printf("The code you entered doesn't match any product\n");
//            break;
//        }   
//    }
//}



//                                                                //search for product


void SearchByCode(){
    char pro_code[15];
    int i;
    printf("Enter the code of the product you want to search for:\t");
    scanf("%s",pro_code);
    for(i=0;i<count;i++){
    	
        if (strcmp(prd[i].code,pro_code)==0)
            {
                system("cls");
                 printf("exist\n");
                printf(" Code : %s \tName: %s\t Quantity : %d Price : \t %.2f Dh  PriceTVA : %.2f Dh\n",prd[i].code,prd[i].nom,prd[i].quantity,prd[i].prix,(prd[i].prix+(prd[i].prix*0.15)));
                return;
            }
        }
        printf("This product doesn't exist'\n");
}


int main(int argc, char *argv[]) {
	menu();
	return 0;
}


//
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//#include <ctype.h>
//#include <windows.h>
//#include <string.h>
//
//int numberOfProduct = 0,i;
//
/////*************** THE MAIN MENU ***************
//
//void menu(){
//    int Choice; 
//    int n;
//    int numberOfProducts;
//    int decision;
////    char code_product[10];
////    int numb_of_product;// add or deduct
//	do{
//	printf("//////////////////////////////////////////////////////////////////////////// \n");
//	printf("/                           (Pharmacy Management)                          /\n");
//	printf("////////////////////////////////////////////////////////////////////////////\n\n");
//
//    printf("\n ============================ MENU ============================== \n\n");
//    printf("\t 1  : Add a new product \n");
//    printf("\t 2  : Add multiple new products \n");
//    printf("\t 3  : List all the products (Name, price, price + TVA) \n");
//    printf("\t 4  : Buy a product \n"); 
//    printf("\t 5  : Search the products\n");
//    printf("\t 6  : Stock Status \n");
//    printf("\t 7  : Suply the stock \n");
//    printf("\t 8  : Delete the products \n");
//    printf("\t 9  : Sales statistics \n");
//    printf("\t 10 : Exist the program \n");
//    printf("\n ================================================================= \n\n");
//    printf("\n Enter your choice: ");
//    scanf("%d", &Choice);
//    
//   	switch(Choice){
//   		case 1 : 
//		   addNewProduct(1);
//        break;
//        
//        case 2 : 
//            printf("\n Enter the number of the products that you want to add: ");
//            scanf("%d", &numberOfProducts);
//            addNewProduct(numberOfProducts);
//            break;
//            
//        case 3 : printf(" 1  : Products in ascending alphabetical order. \n");
//                 printf(" 2  : Products in descending order of price. \n");
//                 printf("\nEnter your choice: ");
//                 scanf("%d", &decision);
//                 if(decision == 1){
//                        listByNames();
//                     }
//                    else if (decision == 2){
//                        listByPrice();
//                    }
//                    break;
//        case 4 : buyProduct();
//        		 break;
//        case 5 :    printf("Search for a product");
//                    printf(" 1  : Search by Code \n");
//                    printf(" 2  : Search by Quantity \n");
//                    printf("\nEnter your choice : ");
//                    scanf("%d", &decision);
//                    if(decision == 1)
//                    {
//                    	printf("\n------------- LES RESULTAT DE RECHERCHE ------------- \n\n");
//                        SearchByCode();
//                        
//                    }
//                    else if(decision == 2)
//                    {
//                    	printf("\n------------- LES RESULTAT DE RECHERCHE ------------- \n\n");
//                        searchByQuantity();      
//                    }
//        		 break;
//        case 6 : printf("The products available on the stock: \n");
//				 statusOfTheStock();
//				 break;
//        case 7 : supplyTheStock();
//        case 8 : deleteProduct();
//        case 9 : salesStatistics();        
//		default:
//    	printf("You existed the program\n");
//    }
//	}while(Choice!=10);
//}
//
//struct product {
//	char name[20];
//	char code[30];
//	int quantity;
//	float price;
//	float priceTVA;
//};
//
////Statical variabel section 
////how many products we added
//static int nbr=4;
////where we stock the products 
//static struct product prd[200] = {
//	{"nameA", "aCode", 10, 50, 5},
//	{"nameB", "bCode", 20, 100, 5},
//	{"nameC", "cCode", 30, 150, 5},
//	{"nameD", "dCode", 40, 200, 5},
//};
//
//
//void addNewProduct(int numberOfProducts){
//    int i; 
//    
//    printf("Enter the name of the product: ");
//    scanf("%s", prd[nbr].name);
//    
//    for(i = 0; i < numberOfProducts; i++){
//    printf("Enter the code of the product: ");
//    scanf("%s", prd[nbr].code);
//    
//    printf("Enter the quantity of the product: ");
//    scanf("%d", &(prd[nbr].quantity));
//    
//    printf("Enter the price of the product: ");
//    scanf("%f", &(prd[nbr].price));
//    
//	prd[nbr].priceTVA = prd[nbr].price  + (prd[nbr].price * 0.15);
//	printf("The price with TVA is: %.2f", prd[nbr].priceTVA);
//    nbr++;
//    numberOfProduct++;
//    
//	}
//}
//
//
//void afficher(){
//	int i;
//	for(i = 0; i<nbr; i++){
//		printf("Name of the product: %s\n", prd[i].name);
//		printf("Code of the product: %d\n", prd[i].code);
//		printf("Quantity of the product: %d\n", prd[i].quantity);
//		printf("Price of the product: %f\n", prd[i].price);
//		printf("PriceTVA of the product: %f\n", prd[i].priceTVA);
//	}
//}
//
//void  listByNames(){
//    struct product temprod;
//
//    int i,j;
//    
//    for(i=0;i<nbr;i++)
//	{
//        for(j=i+1;j<nbr;j++)
//		{
//        if(strcmp(prd[i].name,prd[j].name)>0)
//			{
//              temprod=prd[i];
//              prd[i]=prd[j];
//              prd[j]=temprod;
//            }
//    	}
//	}
//	
//  afficher();
//
//}
//
// 
//void listByPrice(){
//    struct product temprod;
//
//	int i, j;
//	for(i = 0; i < nbr; i++){
//		for(j = i+1; j < nbr; j++){
//			if(prd[i].price < prd[j].price){
//				temprod = prd[j];
//				prd[j] = prd[i];
//				prd[i] = temprod;
//			}
//		}
//	}
//	afficher();
//	
//}
//
//void buyProduct() 
//{
//    system("cls");
//    printf("============== You are about to buy a new product ==============\n");
//     
//    char tmpCode[20];
//    	
//    printf("Enter the code of the product: ");
//    scanf("%s",tmpCode); 
//    
//    for (i = 0; i < nbr; i++)
//    {
//        if ( strcmp(prd[i].code,tmpCode) == 0 ){
//           
//                printf("The product you are about to buy is %s and the quantity is: %d\n", prd[i].name,prd[i].quantity);
//                int tmpQantity = 0;
//                printf("Give the quantity you want to buy: ");
//                scanf("%d", &tmpQantity);
//                if ( tmpQantity <= prd[i].quantity)
//                {
//                    
//                    prd[i].quantity -= tmpQantity;
//                    
////                    ///showing time
////                         time_t t = time(NULL);
////                        struct tm *tm = localtime(&t);
////                       
////                        size_t ret = strftime(products[numberOfProducts].time, sizeof(products[numberOfProducts].time), "%c", tm);
////                        assert(ret);
//                    
//                    
//                }       
//                else
//                    printf("Quantity not avalaible\n");
//        }
//        else
//         {
//            printf("The code you entered doesn't match any product\n");
//            break;
//        }
//        
//    }
//}
//
//
//
//void SearchByCode()
//{
//    char x_code[15];
//    printf("Enter the code of the product you want to search for:\t");
//    scanf("%s",x_code);
//    for(i=0;i<nbr;i++)
//    {
//        if (strcmp(prd[i].code,x_code)==0)
//            {
//                system("cls");
//                 printf("exist\n");
//                printf(" Code : %s \tName: %s\t Quantity : %d Price : \t %.2f Dh  PriceTVA : %.2f Dh\n",prd[i].code,prd[i].name,prd[i].quantity,prd[i].price,(prd[i].price+(prd[i].price*0.15)));
//                return;
//            }
//        }
//        printf("This product doesn't exist'\n");
//}
//
//void searchByQuantity()
//{
//    int xQuantity;
//    int find=0;
//
//    printf("Enter the quantity :\t");
//    scanf("%d",&xQuantity);
//    for(i=0;i<nbr;i++)
//    {
//        if (prd[i].quantity == xQuantity)
//        {
//            printf("Exist\n");
//            printf(" Code : %s \tName: %s\t Quantity : %d Price : \t %.2f Dh  PriceTVA : %.2f Dh\n",prd[i].code,prd[i].name,prd[i].quantity,prd[i].price,(prd[i].price+(prd[i].price*0.15)));
//            find++;
//
//            }
//        }
//        if(find==NULL)
//          printf("Quantity doesn't exist'\n");
//}
//
//void statusOfTheStock()
//{
//    for(i=0;i<nbr;i++)
//    {
//        if(prd[i].quantity<3)
//        printf(" Code : %s \tName: %s\t Quantity : %d Price : \t %.2f Dh  PriceTVA : %.2f Dh\n",prd[i].code,prd[i].name,prd[i].quantity,prd[i].price,(prd[i].price+(prd[i].price*0.15)));
//    }
//
//}
//
//void supplyTheStock()
//    {
//        char x_code_add[15];
//        int x_quantite_add;
//        printf("Veuillez donner le code de produit :\t");
//        scanf("%s",x_code_add);
//        for(i=0;i<nbr;i++)
//        {
//            if (strcmp(prd[i].code,x_code_add)==0)
//            {
//                 printf("existe\n");
//                 printf("donner la quantiter :\t");
//                 scanf("%d",&x_quantite_add);
//                 prd[i].quantity += x_quantite_add;
//                return;
//            }
//        }
//          printf("se produit n'existe pas\n");
//}
//
//void deleteProduct()
//{
//    system("cls");
//    char tmpCode[20];
//    int tmpindex=-1;
//    printf("0.Back  \nEnter the product code  \n");
//    scanf("%s", tmpCode);
//
//    for (i = 0; i < nbr; i++)
//        {
//                  if ( strcmp(prd[i].code, tmpCode) == 0 )
//                    {    
//                        tmpindex=i;
//                        break ;                        
//                       }
//        }
//
//    if(tmpindex==-1)
//    {
//        printf("this code is not good");
//    }
//    
//    else
//    {
//          for(i =tmpindex;i<nbr;i++)
//            {
//                
//                prd[i]=prd[i+1];
//            }
//            nbr--;
//    }
//    
//}
//
//int main() {
// 	
//	menu();
//
//	return 0;
//}
