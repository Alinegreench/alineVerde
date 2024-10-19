#include<stdio.h>
int main(){
    int num1, num2, num3;
    printf("ingresa el numero 1 ");
    scanf("%i", &num1);
    printf("ingresa el numero 2 ");
    scanf("%i", &num2);
    printf("ingresa el numero 3 ");
    scanf("%i", &num3);

    if(num1>num2 && num1>num3)
    {
    printf("el numero más grande es %i ", num1);
    }
    else
    {
    if(num2>num3 && num2>num3)
        {
        printf("el numero más grande es %i ", num2);
        }
    else
    printf("el numero mayor es %i", num3);
    }


    return 0;
}
