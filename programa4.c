#include<stdio.h>

int main(){

    float lado, perimetro;
    printf("este programa te permite calcular el perimetro de un cuadrado");
    printf("\n");
    printf("ingresa el valor de uno de sus lados: ");
    scanf("%f", &lado);
    perimetro= lado*4;
    printf("el perimetro de tu cuadrado es= %.2f", perimetro );

    return 0;
}
