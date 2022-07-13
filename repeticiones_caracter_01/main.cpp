#include <stdio.h>

int main(){
    int i,j;
    char c[10];

    printf("Ingrese el caracter a imprimir: ");
    scanf("%s",c);
    printf("Ingrese el numero de repeticiones: ");
    scanf("%d",&j);
    for(i=0;i<j;i++){
        printf("%s\n",c);
    }
}
