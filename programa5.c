#include<stdio.h>
    int main(){
    int num1, num2, num3, num4, suma, producto;
    printf("ingresa el numero 1: ");
    scanf("%i", &num1);
    printf("ingresa el numero 2: ");
    scanf("%i", &num2);
    printf("ingresa el numero 3: ");
    scanf("%i", &num3);
    printf("ingresa el numero 4: ");
    scanf("%i", &num4);
    suma=num1+num2;
    printf("la suma del primero y segundo numero es= %i", suma);
    producto=num2*num3;
    printf("\n");
    printf("el producto del tercer y cuarto numero es= %i", producto);

    return 0;
}
