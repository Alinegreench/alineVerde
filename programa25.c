#include<stdio.h>
int main(){
    float sueldo, anios,nSueldo;
    printf("ingrese su sueldo\n");
    scanf("%f", &sueldo);
    printf("ingrese el numero de anios trabajados hasta la actualidad\n");
    scanf("%f", &anios);

    if(sueldo<500 && anios>=10){

    nSueldo= sueldo + (sueldo*.20);
    printf("su nuevo salario es: %f", nSueldo);
    }
    else
    {   if(sueldo<500 && anios<10){
        nSueldo= sueldo+(sueldo*.05);
        printf("su nuevo sueldo es: %f ", nSueldo);
        }
        else
        printf("su sueldo es: %f", sueldo);
    }


    return 0;
}
