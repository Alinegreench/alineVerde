int main(){
    int i, calif=0, aprobados=0, noAprobados=0;

    for(i=1; i<=10; i++){
        printf("ingrese la calificacion del alumno %d\n", i);
        scanf("%d", &calif);
        if(calif>=7){
            aprobados=aprobados+1;
        }
        else{
            noAprobados=noAprobados+1;
        }
    }

    printf("\nel total de alumnas que tienen una calificacion de 7 o mas es: %d", aprobados);
    printf("\nel total de alumnas que tienen una calificacion de menos de 7 es: %d", noAprobados);

    return 0;
}
