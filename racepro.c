#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

/* 
int main()
{
    srand(time(0));
};*/

                                         // Structures section
struct Race{
		int numOflaps , currentlap;
		char firstPdriverN[20] , firstPraceCarcolor[20];
	};
	
struct RaceCar{
		char driverName[20] , raceCarColor[20];
		int totalLaptime;
	};
	
	                                       // Print functions section
	
void printIntro(){
 	printf("Welcome to our main event ,Digital racing fans ! everyone take your places we will start\n\n");
 	sleep(2);
 }
 
void printcountDown(){
 	int i ;
 	printf("Runners ready! In...\n\n");
 		sleep(2);
 	for(i=5;i>=1;i--){
 		printf("%d\n\n",i);	
 		sleep(1);
 		
	 }
	printf("go!!\n\n");
 }

 void printFirstPlaceAfterLap(struct Race race){
 	printf("apres le tour numero %d. \nla premier place est occupee par : %s dans la voiture de couleur %s!\n\n",race.currentlap,race.firstPdriverN,race.firstPraceCarcolor);
 }
int printCongratulation(struct Race race){
	printf("Felicitons tous %s, dans la voiture de course %s, pour son incroyable performance .\n\t C'etait vraiment une belle course et bonne nuit a tous !\n\n",race.firstPdriverN,race.firstPraceCarcolor);
return 0;
}
                                          // Logic functions section


 int calculateTimeToCompleteLap(){
 	srand(time(0));                                    //randam nomber
   int s;
 	int vitesse=(rand()%(3-1+1)+1);                   //rand()%(max - min +1 )+min)
    int acceleration=(rand()%(3-1+1)+1);
    int nerves =(rand()%(3-1+1)+1);
    s=vitesse +acceleration +nerves;

    printf("%d\n",vitesse);
    printf("%d\n",acceleration);
    printf("%d\n",nerves);
//        printf("%d\n",s);
    return s ;
 }
void updateRaceCar(struct RaceCar *raceCar){
	raceCar->totalLapTime+=calculateTimeToCompleteLap();

}
void updateFirstPlace(struct Race *race, struct RaceCar *raceCar1, struct RaceCar *raceCar2){
	
	 if(raceCar1->totalLapTime<= raceCar2->totalLapTime){
    	strcpy(race->firstPlaceDriverName,raceCar1->driverName); 
    	strcpy(race->firstPlaceRaceCarColor,raceCar1->raceCarColor);
     
    	}else if (raceCar1->totalLapTime > raceCar2->totalLapTime) {
		strcpy(race->firstPlaceDriverName,raceCar2->driverName);
		strcpy(race->firstPlaceRaceCarColor,raceCar2->raceCarColor);
        }
    race->currentLap++;
	
}
}
int main() { 

struct Race race={6,2,"Mario","rouge"};

  printIntro();
  printcountDown();
  printFirstPlaceAfterLap(race);
  printCongratulation(race);
  calculateTimeToCompleteLap();
   
	return 0;
}
