#include <stdio.h>

int main(){
    float C, M, i;
    int n, j;

    C = 100;
    i = 0.1;
    n = 5;
    M = C;

    printf("M = R$ %.2f\n", M);
    for(j = 1; j <= n; j++){
        M = C * (1 + i*j);
        printf("M = R$ %.2f\n", M);
    }
    
    return 0;
}
