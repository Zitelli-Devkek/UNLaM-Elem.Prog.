int main()
{
    int horas;
    float tarifa, sueldo;
    printf("Ingrese la cantidad de horas: ");
    scanf("%d",&horas);
    printf("Ingrese paga por hora: ");
    scanf("%f", &tarifa);
    sueldo=horas*tarifa;
    printf("Su sueldo es: $%.2f", sueldo);
    getch();
    return 0;
}
