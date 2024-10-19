#include<stdio.h>
int main(){
    int num1, num2, num3, suma, producto;
    printf("ingresa el numero 1 ");
    scanf("%i", &num1);
    printf("ingresa el numero 2 ");
    scanf("%i", &num2);
    printf("ingresa el numero 3 ");
    scanf("%i", &num3);

    if(num1==num2 && num2==num3){
    suma=num1+num2;
    printf("el resultado de la suma es: %i\n", suma);
    producto=suma*num3;
    printf("el resultado del producto es: %i\n", producto);

    }
    return 0;
}
