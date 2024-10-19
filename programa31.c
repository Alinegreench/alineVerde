#include<stdio.h>
int main(){
        int contador=1, mayor=0, menor=0, trabajadores=0;
        float sueldo=0, suma=0;

        printf("ingresa la cantidad de empleados a considerar: \n");
        scanf("%d", &trabajadores);

        while(contador<= trabajadores){
            printf("ingrese el sueldo del trabajador numero %d\n", contador);
            scanf("%f", &sueldo);

            if(sueldo>=100 && sueldo <=300){
            mayor=mayor+1;
            }
            else
            menor=menor+1;

            suma=suma+sueldo;
            contador=contador+1;
        }

        printf("\nla cantidad de trabajadores que ganan entre 100 y 300 es: %d", mayor);
        printf("\nla cantidad de trabajadores que ganan mas de 300 es: %d", menor);
        printf("\nel total de dinero que la empresa gasta en los sueldos es de: %.2f", suma);
    return 0;
}
