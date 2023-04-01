#include <stdio.h>

int main(){
    int numero, armazena=0, f1=0, f2=1, cont=0;
    printf("Digite um numero positivo: ");
    scanf("%d", &numero);//Le numero
    
    for (int i = 0; i < numero; i++)//Gera a sequencia Fibonacci 
    {   
        if(numero==f2){//numero é encontrado para o codigo retorna cont=1; 
            cont=1;
            break;
        }
        armazena=f1+f2;
        f1=f2;
        f2=armazena;

    }
    
    if(cont!=0 || numero==0){
        printf("O numero %d pertence a sequencia Fibonacci.\n", numero);
    }
    else{
        printf("O numero %d não pertence a sequencia Fibonacci.\n", numero);
    }
    
        
    return 0;
}