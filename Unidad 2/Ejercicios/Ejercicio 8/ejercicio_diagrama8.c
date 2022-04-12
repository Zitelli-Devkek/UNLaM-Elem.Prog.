int main()

{
    int fecha, solo_anio, solo_mes, solo_dias, mes_anio; /* no compilaba por hacer uso de la enie xd*/

    printf("Ingrese una fecha en formato ddmmaa, sin slash: ");

    scanf("%d", &fecha);

    solo_dias=fecha/10000;
    mes_anio=fecha%10000;
    solo_mes=mes_anio/100;
    solo_anio=mes_anio%100;

    printf("Su fecha en aammd es: %d%d%d", solo_anio, solo_mes, solo_dias);




    getch();
    return 0;
}
