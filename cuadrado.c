#include <stdio.h>

int main(){
    
    int lado;
    int contador = 1;
    int contador2 = 1;
    
    printf("Ingrese la medida de los lados del cuadrado: ");
    scanf("%d", &lado);
    printf(" \n");
    
    while (contador2 <= lado){
          contador = 1;
          
          while (contador <= lado){
                printf("%s ", "*");
                contador ++;
          }
          printf(" \n");
          contador2 ++;
    }
    printf(" \n");
    return 0;
}
