#include<stdio.h>
int main(){
    int num;
    printf("ingresa un numero");
    scanf("%i", &num);

    if(num<1000){
        if(num>=100){
        printf("el numero es de 3 cifras");
        }
        else
        {
        if(num >= 10){
        printf("el numero es de 2 cifras");
        }
        else
        printf("el numero es de una cifra");
        }
    }
    else
    printf("numero invalido");


    return 0;
}
