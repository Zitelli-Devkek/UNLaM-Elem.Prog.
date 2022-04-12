int main()

{
    int num, centena, decena, unidad;

    printf("Ingrese un numero entero de 3 cifras: ");
    scanf("%d", &num);

    centena=num/100;
    decena=(num%100)/10;
    unidad=(num%100)%10;

    printf("Su numero descompuesto en centena, decena y unidad es: %d, %d, %d",centena, decena, unidad);



    getch();
    return 0;
}
