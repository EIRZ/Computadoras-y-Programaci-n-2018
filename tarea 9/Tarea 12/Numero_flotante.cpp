#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main(){
	
	float a,b,max,min;
	int c;
	
	printf("Digite el primer valor decimal:\n");
	scanf("%f",&a);
	printf("Digite el segundo valor decimal:\n");
	scanf("%f",&b);
	printf("Digite el tercer valor entero:\n");
	scanf("%i",&c);
	
	if(a>b){
		if(a>c){
			max=a;
		}else{
			max=c;
		}
	}else{
		if(b>c){
			max=b;
		}else{
			max=c;
		}
	}
		
	if(a<b){
		if(a<c){
			min=a;
		}else{
			min=c;
		}
	}else{
		if(b<c){
			min=b;
		}else{
			min=c;
		}
	}
	
	printf("El numero mayor es:\n %f\n",max);
	
	printf("El numero menor es:\n %f\n",min);
	
	system("pause");
	return 0;
	
}


	

