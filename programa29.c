#include<stdio.h>
int main(){
        int contador=1, mayor=0, menor=0;
        float calif=0;

        while(contador<=10){
            printf("ingresa la calificacion del estudiante %d\n", contador);
            scanf("%f", &calif);

            if(calif>=7){
            mayor=mayor+1;
            }
            else
            menor=menor+1;
            contador=contador+1;
        }

        printf("\nla cantidad de alumnos con calificacion mayor o igual a 7 es de: %d", mayor);
         printf("\nla cantidad de alumnos con calificacion menor o igual a 7 es de: %d", menor);
    return 0;
}
