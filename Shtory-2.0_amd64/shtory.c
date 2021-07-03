#include <stdio.h>
#include <stdlib.h>

/* This is the launcher for the game SHTORY, which is made by TAHA RAWJANI. ALL RIGHTS REVERVED, COPYRIGHT JULY 2ST 2021. This is version 2.0 of shtory. */

int main (){
	printf("Welcome to shtory. For rules and liscense info, Please refer to info.txt located in the main directory. \nNOTE: THIS IS AN INDEV VERSION. \n");
	printf("Type the integer 0 to start and type quit to quit. \n\nSHTORY>");
	int start;
	
	scanf("%d", &start);
	
	if (start == 0 ){
			
			printf("Starting Shtory... \n");
			system("sleep 4");
			printf("loading files... \n");
			printf("\n\n");
			system("sleep 3");
			
			printf("Shtory has been started. To continue , type cd .start and type enter. \n\n");
			printf("After going to the start directory, type cat Story and your journey will begin!\n\n");
			system("sleep 3");
			
		}
			
		else {
		
		printf("quitting shtory... \n");
			}
		
	
return 0;
}
