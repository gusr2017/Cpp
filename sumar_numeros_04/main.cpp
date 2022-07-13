//Programa que suma 2 números
#include <stdio.h>

int sumar(int,int);

int sumar(int x,int y){
    int a;
    a = x + y;
    return a;
}

int main(){
    int a,b;
    printf("Ingrese el primer valor: ");
    scanf("%d",&a);
    printf("Ingrese el segundo valor: ");
    scanf("%d",&b);
    printf("La suma es: %d",sumar(a,b));
}
