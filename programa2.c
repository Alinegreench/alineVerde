#include<stdio.h>

int main(){
    float lado, area=0;
    printf("este programa te ayuda a calcular el area de un cuadrado \n  ");
    printf("\n ingrese el valor de uno de los lados");
    scanf("%f", &lado);
    area=lado*lado;
    printf("el area de tu cuadrado es: %.2f", area);
    getchar();

    return 0;
}
