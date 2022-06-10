#include <stdlib.h>
#include <stdio.h>

typedef struct
{
    int dni;
    char nombreApellido[81];
    int nota1;
    int nota2;
    float promedio;
}infocomi;


int cargaDatoValido(int, int, int);
void cargarArchivo();
void leerArchivo();

int main()
{
    cargarArchivo();
    leerArchivo();
    return 0;
}


cargaDatoValido(int li, int ls, int caso0)
{
    int dato, flag=0;

    do
    {
        if(flag==1)
            printf("Dato erroneo. Vuelva a ingresarlo: ");

        scanf("%d", &dato);
        flag=1;

    }while(dato<li&&dato!=caso0||dato>ls);

        return dato;
}

cargarArchivo()
{
    infocomi inco;

    FILE * pcarga;

    pcarga=fopen("alumnos.dat", "wb");
    if(pcarga==NULL)
        {
            printf("Ha ocurrido un error al inicializar el archivo alumnos.dat");
            getch();
            exit(1);
        }

        printf("Ingrese el DNI del alumno.-Cero para terminar-: ");
        inco.dni=cargaDatoValido(10000000,99999999,0);

        while(inco.dni!=0)
        {
            fflush(stdin);
            printf("\nIngrese el nombre del alumno: ");
            gets(inco.nombreApellido);

            fflush(stdin);

            printf("\nIngrese la nota 1 del alumno %s: ",inco.nombreApellido);
            inco.nota1=cargaDatoValido(1,10,10);


            printf("\nIngrese la nota 2 del alumno %s: ", inco.nombreApellido);
            inco.nota2=cargaDatoValido(1,10,10);


            inco.promedio=(inco.nota1+inco.nota2)/2.;


            fwrite(&inco, sizeof(inco),1, pcarga);

            printf("\nIngrese el DNI del alumno.-Cero para terminar...: ");
            inco.dni=cargaDatoValido(10000000,99999999,0);
        }


    fclose(pcarga);
    return 0;
}

leerArchivo()
{
    infocomi inco;

    FILE * plectura;

    plectura=fopen("alumnos.dat", "rb");
    if(plectura==NULL)
        {
            printf("Ha ocurrido un error al inicializar el archivo alumnos.dat");
            getch();
            exit(1);
        }

        fread(&inco, sizeof(inco),1,plectura);
        printf("%-8s %-30s %6s %6s %6s", "DNI", "Nombre y Apellido", "Nota 1", "Nota 2", "Promedio");
        while(!feof(plectura))
        {
            printf("\n%8d %-30s %6d %6d %6.2f",inco.dni, inco.nombreApellido, inco.nota1, inco.nota2, inco.promedio);
            fread(&inco, sizeof(inco),1,plectura);
        }


    fclose(plectura);

    return 0;
}
