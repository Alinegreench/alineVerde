#include<stdio.h>
#include<conio.h>

int main(){

    float num1,num2,suma, producto;
    num1=0;
    num2=0;

    printf("ingresa el primer numero:");
    printf("\n");
    scanf("%f", &num1);
    printf("ingresa el segundo numero:");
    printf("\n");
    scanf("%f", &num2);
    suma = num1+num2;
    printf("la suma de los numeros es = %f", suma);
    printf("\n");
    producto = num1*num2;
    printf("\n");
    printf("el producto de los numeros es = %f", producto);
    printf("\n");
    return 0;
}
