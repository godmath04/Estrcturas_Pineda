#include<stdio.h>

struct alumnos{
    int matricula;
    char nombre[50];
    char direccion[50];
    char carrera[50];
    float promedio;
};

void obtencionDatos(struct alumnos *ptr){ 
    printf("Ingrese el nombre del alumno:\n");
    gets(ptr -> nombre);
    printf("\n");
    printf("Ingrese la direcci'on del alumno:\n");
    gets(ptr ->direccion);
    printf("\n");
    printf("Ingrese la carrera del estudiante:\n");
    gets(ptr -> carrera);
    printf("\n");
    printf("Ingrese el promedio estudiante:\n");
    scanf("%0.2f", &ptr -> promedio);
    

};


int main(int argc, char const *argv[])
{
    printf("Bienvenido al sistema de registro de alumnos.\n");
    printf("************\n");
   
    return 0;
}
