#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct Race{
		int numOflaps , currentlap;
		char firstPdriverN , firstPraceCarcolor;
	};
	
struct RaceCar{
		char driverName , raceCarColor;
		int totalLaptime;
	};
	
void printIntro(){
 	printf("Welcome to our main event ,Digital racing fans ! everyone take your places we will start\n\n");
 }
 
void printcountDown(){
 	int i ;
 	printf("Runners ready! In...\n\n");
 	for(i=5;i>=0;i--){
 		printf("%d\n\n",i);
 		
	 }
	printf("go!!\n\n");
 }

 void printFirstPlaceAfterLap(){
   int tN;
   char nomeDpilot,coloDvoi;
 	printf("apres le tour numero tN %d \n", &tN);
 	printf("la premier place est occupee par : nomeDpilot%s dans la voiture de couleur coloDvoi%s!",&nomeDpilot,&coloDvoi);
 }
 
 
int main() { 

  printIntro();
  printcountDown();
  printFirstPlaceAfterLap();
	return 0;
}
