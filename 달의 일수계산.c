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
	
	printf("���� �Է��ϼ���\n");
	scanf("%d",&month);
	
	if(month==1,month==3,month==5,month==7,month==8,month==10,month==12){
		printf("%d���Դϴ�\n", x);
		}
	
		
	else if(month==2){
		printf("%d���Դϴ�\n", z);
	
	}
	else{
		printf("%d���Դϴ�\n", y);
	}
		
		
	
	return 0;
}
