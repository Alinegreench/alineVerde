#include<stdio.h>
int main(){
    int num1, num2, suma, producto,resta, division;

    printf("ingrese el primer numero: ");
    scanf("%i", &num1);
    printf("ingrese el segundo numero: ");
    scanf("%i", &num2);

    if(num1>num2){
        suma=num1+num2;
        printf("la suma de los numeros es= %i", suma);
        resta=num1-num2;
        printf("\n");
        printf("la resta de los numeros es= %i", resta);
    }
    else{
        producto=num1*num2;
        printf("el producto de los numeros es= %i", producto);
        division = num1/num2;
        printf("\n");
        printf("la division de los numeros es= %i", division);
    }
    return 0;
}
