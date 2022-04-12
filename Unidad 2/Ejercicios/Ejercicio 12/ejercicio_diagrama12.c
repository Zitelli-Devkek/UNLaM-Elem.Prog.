int main()

{
    float precio, precio_final;
    int descuento;

   printf("Ingrese el precio del producto: ");
   scanf("%f", &precio);

   printf("Ingrese el codigo para descuento: ");
   scanf("%d", &descuento);

    precio_final=precio-((precio/100)*20)*descuento;

    printf("El precio final es de: $%.2f", precio_final);


    getch();
    return 0;
}
