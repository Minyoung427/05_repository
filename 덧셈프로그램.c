#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int input,sum;
	int i;
	
	
	input=0;
	sum=0;
	
	printf("������� �հ踦 ����ұ��?\n");
	scanf("%d",&input);
	
	for(i=0; i<=input; i++){
		sum+=i;
	}
	printf("1���� %d������ �հ�� %d�Դϴ�", input,sum);
	
	return 0;
}
