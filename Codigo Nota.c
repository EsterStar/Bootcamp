#include <stdio.h>

int main(){
    float notas;
    float presença;
    
    printf("Insira sua nota: ");

    scanf("%f", &nota);
    prinf("Insira a porcentagem da presença: ");
    scanf("%f", &presença);

    if(nota >= 7.0){
        printf("Aprovado!");

    }
    else{
        if(nota >= 6);
        if(presença >= 75){
            prinf("Aprovado! ");
        }
        else{
            printf("Reprovado! ");
        }
    }
    


    return 0;
}
