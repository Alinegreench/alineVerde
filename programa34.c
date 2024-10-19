#include<stdio.h>
int main(){
    int conta=1, num=0, suma1=0, suma2=0;

    while(conta<=15){
        printf("ingrese el digito %d de la lista 1\n", conta);
        scanf("%d", &num);
        suma1=suma1+num;
        conta=conta+1;
    }

    conta=1;

   while(conta<=15){
        printf("ingrese el digito %d de la lista 2\n", conta);
        scanf("%d", &num);
        suma2=suma2+num;
        conta=conta+1;
    }

    if(suma1>suma2){
        printf("\nla primera lista es mas grande que la segunda");
    }
    else
        printf("\nla segunda lista es mas grande que la primera");

    return 0;
}
