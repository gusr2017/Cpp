//Programa que suma 2 n�meros
#include <stdio.h>

int sumar(int,int);

int sumar(int x,int y){
    int a;
    a = x + y;
    return a;
}

int main(){
    printf("La suma es: %d",sumar(5,4));
}
