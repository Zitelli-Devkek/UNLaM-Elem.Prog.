int main()

{

    int cant_empanadas, docenas, total_docenas, total_pedido, total_individuales, individuales;


    printf("Ingrese la cantidad de empanadas: ");
    scanf("%d",&cant_empanadas);

    docenas=cant_empanadas/12; /*Algun tipo de bug causaba que las individuales siempre me dieran 16 pesos, incluso cuando eran 0 empanadas. Cambi� los tipos de dato y tampoco
                                funcion�. Incluso habia borrado las partes de empanadas individuales para corroborar que el resto funcionaba. Reorden� los calculos y empez� a
                                funcionar. Luego las volv� a poner en el orden original y segu�a funcionando... Tambi�n puse, en la declaraci�n de variables, las de las empanadas
                                individuales juntas. Tal vez eso tuvo algo que ver*/
    total_docenas=docenas*300;
    individuales=cant_empanadas%12;
    total_individuales=individuales*30;




    total_pedido=total_docenas+total_individuales;

    printf("El total a abonar es: $%d", total_pedido);




    getch();
    return 0;
}


