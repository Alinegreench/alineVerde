#include<stdio.h>
int main(){
        int contador=1, personas=0;
        float altura=0, prom=0, suma=0;

        printf("ingrese el numero de personas a obtener su altura:\n");
        scanf("%d", &personas);

        while(contador<=personas){
            printf("ingresa la altura de la persona %d\n", contador);
            scanf("%f", &altura);

            suma=suma+altura;
            contador=contador+1;
        }
        prom=suma/personas;
        printf("el promedio de las alturas obtenidas es: %.2f", prom);



    return 0;
}
