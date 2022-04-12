int main()
{
int n1, n2,suma, producto, resto, cociente; /* Habia puesto el cociente como float, por lo que la division me daba 0. Si quiero un resultado entero, necesito la variable
                                                que guarda el dato como entero tambien */


printf("Ingrese el primer numero: ");
scanf("%d", &n1);
printf("Ingrese el segundo numero: ");
scanf("%d", &n2);

suma=n1+n2;
producto=n1*n2;
cociente=n1/n2;
resto=n1%n2;

printf("La suma de los numeros es: %d.\n El producto de los numeros es: %d.\n El cociente de los numeros es: %d.\n El resto de los numeros es %d.", suma,producto,cociente,resto);


getch();



return 0;
}

