#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i;
	int sum = 0;
	int num = 0;
	
	printf("input a number:");
	scanf("%d", &num);
	
	for (i = 0; i < num; i++)
		( sum = sum + i	);
			
	printf("result is %i\n", sum+num);
		
	return 0;
}
