int main()

{
    float n1, n2, promedio;
    printf("Ingrese la primera nota: ");
    scanf("%f", &n1);
    printf("Ingrese la segunda nota: ");
    scanf("%f", &n2);
    promedio=(n1+n2)/2;
    printf("El promedio del alumno es: %.2f", promedio);
    getch();
    return 0;
}
