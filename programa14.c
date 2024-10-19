#include<stdio.h>
int main(){
    int num1, num2, num3;

    printf("ingresa el numero1 \n");
    scanf("%i", &num1);
    printf("ingresa el numero 2\n");
    scanf("%i", &num2);
    printf("ingresa el numero3 \n");
    scanf("%i", &num3);

    if(num1>num2){
        if(num1>num3){
        printf("el numero mayor es %i ", num1);
        }
        else
        printf("el numero mayor es %i ", num3);
    }
    else
    {
        if(num2>num3){
        printf("el numero mayor es %i ", num2);
        }
        else
        printf("el numero mayor es %i ", num3);
    }

    return 0;
}
