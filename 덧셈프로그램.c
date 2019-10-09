#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int input,sum;
	int i;
	
	
	input=0;
	sum=0;
	
	printf("몇까지의 합계를 계산할까요?\n");
	scanf("%d",&input);
	
	for(i=0; i<=input; i++){
		sum+=i;
	}
	printf("1부터 %d까지의 합계는 %d입니다", input,sum);
	
	return 0;
}
