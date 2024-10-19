#include<stdio.h>
int main(){
        int pieza=0, contador=1, cantidad=0;
        float lon=0;

        printf("ingresa el numero de piezas a procesar\n");
        scanf("%d", &pieza);

        while(contador<=pieza){
            printf("ingresa la logitud la pieza %d\n", contador);
            scanf("%f", &lon);

            if(lon>=1.20 && lon<=1.30){
            cantidad=cantidad+1;
            }
            contador=contador+1;
        }
        printf("\nel total de piezas aptas es: %d", cantidad);
    return 0;
}
