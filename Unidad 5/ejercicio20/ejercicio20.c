int main()

{
    int num, y=1, asteriscos, renglones, espacios, e;

    printf("Ingrese un numero: ");
    scanf("%d", &num);
    e=num;


    for(renglones=1;renglones<=num;renglones++)
        {
        for(espacios=1;espacios<=e;espacios++)
            printf(" ");
        e--;


        for(asteriscos=1;asteriscos<=y;asteriscos++)
            printf("*");

        printf("\n");
        y+=2;
        }





    getch();
    return 0;
}
