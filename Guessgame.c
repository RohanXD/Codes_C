/* Little Guess Game */
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	printf("\t\tThis is a Guess Game \n");
	printf("You Will Get three chances to Guess the number \nOtherwise you will loose the game\n");
	int num = 5;
	int guess;
	int guesscount = 0;
	int guesslimit = 3;
	int outofguess=0;
	
	while(guess != num && outofguess== 0 ){
		if(guesscount < guesslimit);
		printf("Enter a number in between 1-20:");
		scanf("%d", &guess);
		guesscount++;
	 	else {
		outofguess == 1;
	}
}
}

