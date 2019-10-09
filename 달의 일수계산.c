#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int month;
	int x;
	int y;
	int z;
	
	
	x=31;
	y=30;
	z=28;
	
	printf("달을 입력하세요\n");
	scanf("%d",&month);
	
	if(month==1,month==3,month==5,month==7,month==8,month==10,month==12){
		printf("%d일입니다\n", x);
		}
	
		
	else if(month==2){
		printf("%d일입니다\n", z);
	
	}
	else{
		printf("%d일입니다\n", y);
	}
		
		
	
	return 0;
}
