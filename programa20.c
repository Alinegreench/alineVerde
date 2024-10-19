#include<stdio.h>
int main(){
   int dd, mm, aa;
   printf("ingresa el dia en formato dd: \n");
   scanf("%i", &dd);
   printf("ingresa el mes en formato mm: \n");
   scanf("%i", &mm);
   printf("ingresa el anio en formato aaaa: \n");
   scanf("%i", &aa);

   printf("la fecha ingresada es: %i/%i/%i\n", dd,mm,aa);

    if(mm==12 && dd==25)
    {
        printf("es navidad");
    }
    else
        printf("NO es navidad");
return 0;

}
