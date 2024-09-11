#include <stdio.h>

#define MAX 100 

int main() {
    int l[MAX]; 
    int a = 0;  
    int r = -1;
    int i;      

    
    printf("Escreva um  valor para ser inserido na fila: ");
    scanf("%d", &i);
    l[++r] = i; 

   
    if (a <= r) { 
        printf("Elemento removido: %d\n", l[a]); 
        a++; 
    } else {
        printf("A fila está vazia.\n");
    }

    return 0;
}
