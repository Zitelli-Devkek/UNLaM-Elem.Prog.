
int main()

{
    float valor_kib, mib, gib, tib;

    printf("Ingrese los kibibytes: ");
    scanf("%f",&valor_kib);

    mib=valor_kib/1024;
    gib=mib/1024;
    tib=gib/1024;

    printf("Sus equivalencias son:\n Mebibytes: %f\n Gibibytes: %f\n Tebibytes: %f", mib, gib, tib);



    getch();
    return 0;
}
