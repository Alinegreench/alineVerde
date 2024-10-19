#include<stdio.h>
    int main(){
    float num1, num2, num3, num4, suma;
    float prom;
    printf("ingresa el numero 1: ");
    scanf("%f", &num1);
    printf("ingresa el numero 2: ");
    scanf("%f", &num2);
    printf("ingresa el numero 3: ");
    scanf("%f", &num3);
    printf("ingresa el numero 4: ");
    scanf("%f", &num4);
    suma=num1+num2+num3+num4;
    printf("la suma de los numeros es= %f", suma);
    prom=(suma/4);
    printf("\n");
    printf("el promedio de los cuatro numeros es = %f", prom);

    return 0;
}
