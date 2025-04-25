//Escreva um algoritmo que alimente um vetor com 5 números inteiros e apresente o vetor em ordem inversa//

#include <stdio.h>


int main() {
    
    int numero[5], i;
    
    for(i = 0; i < 5; i++){
        printf("informe o elemento: ");
        scanf("%d", &numero[i]);
        
    }
    
    
    for(i = 4; i >= 0; i--){
    
    printf("\nelementos do vetor:%d", numero[i]);
    
    }
    return 0;
}
