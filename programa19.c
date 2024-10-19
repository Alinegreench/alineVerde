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

    if(mm==1 || mm==2 ||mm==3)
    {
        printf("corresponde al primer trimestre");
    }
    else
        printf("NO corresponde al primer trimetre del anio");
return 0;

}
