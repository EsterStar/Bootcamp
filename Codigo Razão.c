#include <stdio.h>

int main(){
    int razao = 2;
    int al = 1;
    int n = 5;
    int i;

    printf("Digite o primeiro termo da PG: ");
    scanf("%d, &al);

    printf("Digite a razao da PG: ");
    scanf("%d, &razao);

    printf("Digite o numero de termos da PG: );
    scanf("%d, &n);

    for(i = 1,; 1<= n; i++){
        printf("%d, al");
        al = al * razao;
    }
    
    return 0;
}
