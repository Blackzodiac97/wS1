#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	char fName[30], sName[30] , gender, nomPhon[15];
	int age;
	
	printf("write your first name :");
	scanf("%s",&fName);
    printf("write your second name :");
	scanf("%s", &sName);
	printf("write your gender :");
	scanf("%s",&gender);
	printf("write your age :");
	scanf("%d", &age);
	printf("write your phone nomber :");
	scanf("%s", &nomPhon);
	
	printf("your info\n");
	printf("fname : %s\n",fName);
	printf("sname : %s\n",sName);
	printf("gender : %s\n",&gender);
	printf("age : %d\n",&age);
	printf("phone nomber : %s\n",&nomPhon);
	
	return 0;
}
