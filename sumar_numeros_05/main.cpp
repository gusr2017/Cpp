//Programa que suma 2 números
#include <stdio.h>

void sumar(int,int);

void sumar(int x,int y){
    int a;
    a = x + y;
    printf("La suma es: %d",a);
}

int main(){
    int a,b;
    printf("Ingrese el primer valor: ");
    scanf("%d",&a);
    printf("Ingrese el segundo valor: ");
    scanf("%d",&b);
    sumar(a,b);
}
