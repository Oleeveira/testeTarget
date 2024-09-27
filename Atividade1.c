#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int fibonacci(int n){
    int a = 0, b = 1, c;
    if(n < 2){
        return 0;
    }
    else{
    for(int i = 2; i < MAX; i++){
        if(a == n){
            return 0;
        }
        else{
            c = a + b;
            a = b;
            b = c;
        }
    }
    return 1;
    }
}

int main(void){
    int n;
    printf("Digite um número: ");
    scanf("%d", &n);
    if(fibonacci(n) == 0)
        printf("O número %d pertence a sequência de Fibonacci.", n);
    else
        printf("O número %d não pertence a sequência de Fibonacci.", n);

    return 0;
}
