#include<stdio.h>
int main(){
    int num1, num2, num3, suma, producto;
    printf("ingresa el numero 1 ");
    scanf("%i", &num1);
    printf("ingresa el numero 2 ");
    scanf("%i", &num2);
    printf("ingresa el numero 3 ");
    scanf("%i", &num3);

    if(num1<10 || num2<10 || num3<10)
    {
    printf("alguno de los numeros ingresados es menor a 10");
    }
    return 0;
}
