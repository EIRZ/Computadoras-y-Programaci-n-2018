 #include <stdio.h>

 void fncuadrado(){
 	int j=0;
 	int k=0;
 	int h=0;
  printf("Este programa te hara un cuadrado\n");
  printf("introduce un numero:");
  scanf("%d,&h");


     for(j=1; j<=h; j=j+1){
     	if(j==1){
     		    for(k=1;k<=h;k=k+1){
     		    	printf("* ");
     		    	
				 }
		 
	 }
 	    if(j>=1&&j<h){
 	    	           for(k=1;k<=h;k=k+1){
 	    	           	if(k==1){
 	    	           		
 	    	           		printf("* ");
 	    	           		
							}
							if(k>=2&&k<h){
								printf("* ");
								}
							if(k==h){
								printf("* ");
							}
							}
							
						}
						if(j==h){
							for(k=1;k<=h;k=k+1){
								printf("* ");
							}
						}
					printf("\n");
		 }
 }
int main(){
	fncuadrado();
	return 0;
}
