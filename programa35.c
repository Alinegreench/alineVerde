#include<stdio.h>
    int main(){
        int contador=1, n=0, num=0, pares=0, impares=0;


        printf("ingresa la cantidad de numeros a considerar: \n");
        scanf("%d", &n);

        while(contador<=n){
            printf("ingresa el %d numero\n", contador);
            scanf("%d", &num);

            if(num%2 ==0){
                pares=pares+1;
            }
            else{
                impares=impares+1;
            }
            contador=contador+1;
        }

    printf("\nel numero de valores pares es: %d", pares);
    printf("\nel numero de valores impares es: %d", impares);

    return 0;
}
