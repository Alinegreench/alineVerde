#include<stdio.h>
int main(){
    int num;
    printf("ingresa un numero para saber si es negativo, positivo o nulo \n");
    scanf("%i", &num);

    if(num>=0){
        if(num == 0){
        printf("numero nulo");
        }
        else
        printf("el numero es positivo");
    }
    else
    printf("el numero es negativo");

    return 0;
}
