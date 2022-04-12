int main()

{
    int num1, num, num2, num3, num4, suma, decena, unidad, suma_nums;

    printf("Ingrese su numero de cuatro digitos, positivo: ");
    scanf("%d", &num);

    num1=num/1000;
    num2=(num%1000)/100;
    num3=((num%1000)%100)/10;
    num4=((num%1000)%100)%10;




    suma=num1+num2+num3+num4;

    decena=suma/10;
    unidad=suma%10;
    suma_nums=decena+unidad;

    printf("La suma de sus 4 numeros es: %d", suma_nums);






    getch();
    return 0;
}
