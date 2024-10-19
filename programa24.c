#include<stdio.h>
int main(){
    int x,y;
    printf("ingrese la cordenada en x");
    scanf("%i", &x);
    printf("ingrese la cordenada en y");
    scanf("%i", &y);

    if(x>=0 && y>=0)
    printf("primer cuadrante");
    else
    {
        if(x<=0 && y>=0){
        printf("segundo cuadrante");
        }
        else
        {
            if(x<=0 && y<=0){
        printf("tercer cuadrante");
        }
        else
        printf("cuarto cuadrante");
        }
    }

    return 0;
}
