#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int num,i;
	
	printf("�п�J�@�ӼƦr:");
	scanf("%d",&num);
	
	printf("���Ʀr����]�Ƭ�");
	i=2; 
	
	while(num>1){
	    while(num%i==0){
	    	printf("%d ",i);
	    	num=num/i;
		}	
		i++;
	}
	printf("\n");
	
	system("PAUSE");
	return 0;
}
