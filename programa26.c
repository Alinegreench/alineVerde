#include<stdio.h>
int main(){
    int num, contador=0;
    printf("ingresa un numero para que el contador pare: \n");
    scanf("%d", &num);

    while(contador <= num){
        printf("%d \n", contador );
        contador = contador+1;
    }

    return 0;
}
