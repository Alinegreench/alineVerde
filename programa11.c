#include<stdio.h>
int main(){
    int num;
    num=0;

    printf("ingresa un numero del 1 al 99 para saber si tiene una o dos cifras");
    scanf("%i", &num);

    if(num<10)
        printf("%i, es un numero de una cifra", num);
    else
    printf("%i, es un numero de dos cifras", num);

    return 0;
}
