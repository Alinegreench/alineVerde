#include<stdio.h>
int main(){
    float preguntas, contestadas, porcen;

    printf("ingresa el total de preguntas realizadas \n");
    scanf("%f", &preguntas);
    printf("ingresa el numero de preguntas contestadas correctamente \n");
    scanf("%f", &contestadas);

    porcen= (contestadas * 100)/preguntas;
    printf("el porcentaje es %% %f\n", porcen);

    if(porcen >50){
        if(porcen>= 90){
        printf("nivel máximo");
        }
        else{
            if(porcen >=75){
            printf("nivel medio");
            }
            else
            printf("nivel regular");
        }
    }
    else
    printf("fuera de nivel");



}
