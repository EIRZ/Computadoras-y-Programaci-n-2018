#include <stdio.h>



int main(int argc, char *argv[]) {
	int var1=5;
	int var2=2;
	int resultado=0;
	
	//iguala ?
	resultado=var1==var2;
	printf("%d==%d=%d\n",var1,var2,resultado);
	
	//menor igual que ?
	resultado=var1<=var2;
	printf("%d<=%d=%d\n",var1,var2,resultado);
	
	//mayor que ?
	resultado=var1>var2;
	printf("%d>%d=%d\n",var1,var2,resultado);
	
	//diferente que?
	resultado=var1!=var2;
	printf("%d!=%d=%d\n",var1,var2,resultado);
	
	//uso de &&
	resultado=(var1>var2)&&(var1!=var2);
	printf("(%d>%d)&&(%d!=%d)=%d\n",var1,var2,resultado);
	
	return 0;
}
