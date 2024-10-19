#include<stdio.h>
    int main(){
    float precio,total;
    int art;

    printf("ingrese la cantidad de articulos que lleva: ");
    scanf("%i", &art);
    printf("ingrese el precio del articulo es: ");
    scanf("%f", &precio);
    total=precio*art;
    printf("el total a pagar es: %.2f", total);

    return 0;
}
