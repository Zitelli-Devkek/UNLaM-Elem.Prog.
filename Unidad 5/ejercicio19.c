int main()

{
    int num, y=1, asteriscos, renglones;

    printf("Ingrese un numero: ");
    scanf("%d", &num);

    for(renglones=1;renglones<=num;renglones++)
        {
            for(asteriscos=1;asteriscos<=y;asteriscos++)
            printf("*");
        printf("\n");
        y++;
        }




    getch();
    return 0;
}
