int main()
{
    int cant_tachos, cant_1lt, cant_4lt, cant_20lt; /* En el IDE de la facultad, cant_4lt daba un resultado erroneo y necesitaba ser un float. En esta maquina parece funcionar*/


    printf("Ingrese la cantidad de tachos: ");
    scanf("%d", &cant_tachos);

    cant_1lt=0.5*cant_tachos;
    cant_4lt=0.3*cant_tachos;
    cant_20lt=0.2*cant_tachos;
    printf("Usted tiene %d tachos de 1lt, %d de 4lt y %d de 20 litros",cant_1lt, cant_4lt, cant_20lt);




    getch();
    return 0;

}
