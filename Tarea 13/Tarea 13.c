#include <conio.h>
#include <stdio.h>

int main()
{
    char opcion;
    int n1, n2;

    do
    {
        printf( "\n MENU " );
        printf( "\n   1. Suma.");
        printf( "\n   2. Resta.");
        printf( "\n   3. Salir." );
        do
        {
            printf( "\n   Seleccione una opcion (1-3): ");
            fflush( stdin );
            scanf( "%c", &opcion);

        } while ( opcion < '1' || opcion > '3' );

        switch ( opcion )
        {
            case '1': printf( "\n   Introduzca primer numero: " );
                      scanf( "%d", &n1);
                      printf( "\n   Introduzca segundo numero: " );
                      scanf( "%d", &n2);
                      printf( "\n   %d + %d = %d\n", n1, n2, n1 + n2 );
                      break; 
            case '2': printf( "\n   Introduzca primer numero: " );
                      scanf( "%d", &n1);
                      printf( "\n   Introduzca segundo numero: " );
                      scanf( "%d", &n2);
                      printf( "\n   %d - %d = %d\n", n1, n2, n1 - n2 );
                      break;

        }

    } while ( opcion != '3' );

    return 0;
}
