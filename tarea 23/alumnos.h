#include <stdio.h>
#include <string.h>
struct alumnos
    {
	   int edad;
	   char nombre[60];
	   char genero;
	   char carrera[25];
	   char nCuenta[10];
	};
typedef struct alumnos ALUMNO;
ALUMNO nuevoAlumno(){
    ALUMNO tmp;
    printf("Introduce la edad:");
	scanf:("%d",&tmp.edad);
	
	printf("Introduce el nombre:");
	fflush(stdin);
	gets(tmp.nombre);

    printf("Introduce el genero:");
    scanf("%c",&tmp.genero);
    
    printf("Introduce la carrera:");
    fflush(stdin);
    gets(tmp.carrera);
    
    printf("Introduce numero de cuenta:");
    fflush(stdin);
    gets(tmp.nCuenta);
	
	
	return tmp;
}
