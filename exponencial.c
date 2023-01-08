/*Implemente uma funcao recursiva que, dados dois numeros inteiros x e n, calcula o valor de x^n.*/

#include<stdio.h>
#include<stdlib.h>

int exponencial(int x, int n){
    if(n == 0){
        return 1;
    }else{
    return x*exponencial(x,(n-1));
    }
}

int main(){
    int x;
    x = exponencial(8,2);
    printf("\n%i\n", x);
    return 0;
}