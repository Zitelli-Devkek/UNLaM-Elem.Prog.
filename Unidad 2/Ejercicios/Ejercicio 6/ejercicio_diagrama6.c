int main()
{

    int num_primeraclase, num_turistas;
    float total_turista, total_primeraclase, total_vuelo;


    printf("Ingrese los pasajes vendidos en turista: ");
    scanf("%d", &num_turistas);
    printf("Ingrese los pasajes vendidos en primera clase: ");
    scanf("%d", &num_primeraclase);

    total_turista=8800*num_turistas; /* Si pongo la constante con coma, el resultado solo da 8,000, independientemente de la cantidad de boletos.
                                       Si pongo todo el numero junto, funciona bien... */

    total_primeraclase=(8800+(8800/100)*30)*num_primeraclase;
    total_vuelo=total_turista+total_primeraclase;
    printf("La recaudacion total del vuelo es: %.2f", total_vuelo); /*En la maquina de la facultad, el resultado me daba -300 millones, por alguna extraña razon */


    getch();
    return 0;
}
