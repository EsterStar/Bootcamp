#include <stdio.h>

int main(){
    int num;
    int primo;

    printf("Digite um numeor inteiro: ");
    scanf("%d", &num );

    for (i = 2; i * i <= num; i++){
        if(num % i == 0){
            printf("Nao e um numero primo ")

            else ( num % i != 0);
            printf("E um numero primo ");

        }
    }
    

    
    return 0;
}
