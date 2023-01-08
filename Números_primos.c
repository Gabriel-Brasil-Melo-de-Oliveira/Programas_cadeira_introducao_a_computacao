/*Crie uma funcao que receba um numero n como parametro e retorne se ele  ?e primo ou nao. Em seguida
crie um programa que utilize essa funcao para imprimir na tela todos os primos no intervalo de 1 a
1000.*/
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int primo(int n){
    for(int i = 2; i < n-1;i++){
        if(n%i == 0){
            return 0;
        }
    }
    return 1;
}

void primo_1_1000(){
    int x, soma = 0;
    for(int i = 2; i <= 1000; i++){
        x = primo(i);
        if(x == 1){
            printf("\n%i\n", i);
            soma = soma + i;
        }
    }
    printf("A soma dos números primos de 1 até 1000 é de: \t %i", soma);
}

int main(){
    int n;
    int x;
    setlocale(LC_ALL, "Portuguese_Brazil");
    printf("Digite um numero:\n");
    scanf("%i", &n);
    x = primo(n);
    if(x == 0){
        printf("Esse número não é primo!");
    }
    else{
        printf("Esse número é primo!");
    }
    primo_1_1000();
    return 0;
}