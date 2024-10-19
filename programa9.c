#include<stdio.h>
    int main(){
    int num1, num2;

    printf("ingresa el primer numero a comparar");
    scanf("%i", &num1);
    printf("ingresa el segundo numero a comparar");
    scanf("%i", &num2);

    if(num1>num2){
        printf("el numero mayor es %i", num1);
    }
    else{
        printf("el numero mayor es %i", num2);
    }

    return 0;
}
