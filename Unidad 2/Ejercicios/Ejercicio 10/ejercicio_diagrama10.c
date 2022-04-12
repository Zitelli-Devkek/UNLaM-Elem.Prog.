int main()

{

    float radio, superficie, perimetro, volumen;

    printf("Ingrese el valor del radio: ");
    scanf("%f",&radio);

    superficie=3.14*radio*radio;
    perimetro=2*3.14*radio;
    volumen=3.14*radio*radio*radio*4/3; /*Cuando el 4/3 tenia parentesis, directamente no era tomado en cuenta dentro del calculo. Y sin parentesis no multiplica
                                           solo al 4, sino a toda la fraccion, algo no esperado.*/

    printf(" Superficie:%.2f\n Perimetro:%.2f\n Volumen:%.2f\n", superficie, perimetro, volumen);

    getch();
    return 0;
}
