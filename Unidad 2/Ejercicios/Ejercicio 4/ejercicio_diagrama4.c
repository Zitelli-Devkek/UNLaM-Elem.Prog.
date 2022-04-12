int main()
{
float pies, yardas, centimetros, metros, pulgadas; /*Magicamente me dieron todos los resultados bien, utilizando float en todos los tipos de datos, para conseguir los decimales*/
printf("Ingrese la medida en pies: ");
scanf("%f", &pies);

pulgadas=pies*12;
centimetros=pulgadas*2.54;
yardas=pies/3;
metros=centimetros/100;

printf("Sus medidas son:\n pulgadas: %.2f\n centimetros: %.2f\n yardas: %.2f\n metros: %.2f",pulgadas, centimetros,yardas, metros);
getch();




    return 0;
}
