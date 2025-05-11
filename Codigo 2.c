#include <stdio.h>

int main(){
    int razao, quarto_termo, n, primeiro_termo;
    float soma;

    printf("Digite o numero de termos da PA: ");
    scanf("%d, &n );

    printf("Digite a razao da PA: ");
    scanf("%d", &razao );

    printf("Digite o quarto termo da PA: ");
    scanf("%d", &quarto_termo );

    primeiro termo = quarto_termo - 3 * razao;

    soma = (n * (2 * primeiro_termo + (n - 1)* razao));



    return 0;
}
