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
 	printf("Welcome\n");
 }
 
void printcountDown(){
 	int i ;
 	printf("Runners ready! In...\n");
 	for(i=5;i>=0;i--){
 		printf("%d\n",i);
 		
	 }
	printf("go!!");
 }
 int printFirstPlaceAfterLap(int i){
 	
 }
 
 
int main() { 

  printIntro();
  printcountDown();
	return 0;
}
