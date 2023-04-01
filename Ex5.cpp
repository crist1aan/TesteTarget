#include <stdio.h>
#include <string.h>

int main(){
    char plvra[100], result[100];
    int aux=0, aux2=0;
    
    printf("Digite uma palavra: ");
    scanf("%s", plvra);//le a palavra
    
    aux= strlen(plvra);//verifica o tamanho da palavra
    
    for (int i = aux-1; i >=0; i--)//inverte a palavra
    {
        result[aux2]=plvra[i];
        aux2+=1;
    }
    
    printf("%s\n", result);
    
    return 0;
}