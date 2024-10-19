#include <stdio.h>
int main(){
    float cal1,cal2,cal3,prom;

    printf("ingresa las calificaciones de la alumna");
    printf("calificación 1 \n");
    scanf("%f", &cal1);
    printf("calificación 2\n");
    scanf("%f", &cal2);
    printf("calificación 3\n");
    scanf("%f", &cal3);

    prom=(cal1+cal2+cal3)/3;

    if(prom>4){
        if(prom>=4 && prom<7){
            printf("Regular");
        }
        else
            printf("promocionado");

    }
    else
        printf("reprobado");
    return 0;
}
