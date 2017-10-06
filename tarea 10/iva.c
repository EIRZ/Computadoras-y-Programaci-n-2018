#include<stdio.h>
int main()
{
      float precio, iva, total;
      
      printf("\nEscriba el precio del producto: ");
      scanf("%f", &precio);
      printf("\n");
      iva=precio*0.16;                                             /*el iva en Mexico es del 16%*/
      printf("El valor del IVA del producto es de: %f", iva);
      printf("\n\n");
      total=precio+iva;
      printf("El valor del producto con el IVA incluido es de: %f", total);
      printf("\n\n");
      system("PAUSE");
      return 0;
}
