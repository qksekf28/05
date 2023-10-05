#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int answer = 32;
	int num;
	int trial = 0;
	
	do
	{
		//1. input
		printf("Guess a number :");
		scanf("%d", &num);
		
		//2. decision (low/high) (wrong answer)
		if (num > answer)
		{
			printf("high!\n");
			trial = trial + 1;
		}
		else if (num < answer)
		{
			printf("low!\n");
			trial = trial + 1;
		}
	}
	
	while(answer != num); //3. loop condition : answer is equal to num?
	printf("congratulation! trials: %d\n", trial);
		
	return 0;
}
