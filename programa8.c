#include<stdio.h>
    int main(){
    float sueldo;
    printf("ingresa el sueldo neto de la persona");
    scanf("%f", &sueldo);

    if(sueldo >= 3000)
    {
        printf("esta persona debe abonar impuestos");
    }

    return 0;
}
