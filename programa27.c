#include<stdio.h>
int main(){
    float prom, suma=0, num;
    int contador=1;

    while(contador<=10){
    printf("ingrese el %d numero\n", contador);
    scanf("%f", &num);
    suma=suma+num;
    contador=contador+1;
    }
    printf("la suma de los numeros ingresados es : %.2f", suma);
    prom=suma/10;
    printf("\nel promedio de los numeros ingresados es: %.2f", prom);
    return 0;
}
