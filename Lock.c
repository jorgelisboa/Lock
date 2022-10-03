#include <stdio.h>
#define TAMANHO 22

unsigned int tentativas = 0;
unsigned int numerosVisiveis[20];
unsigned int numerosVerdadeiros[] = { //Tipo um hashmap/json número:quantidade
    0, 4,
    1, 7,
    5, 2,
    7, 1,
    9, 3
};
unsigned int senhaDigitada[TAMANHO]; //Podem ser digitados 22 digitos

int main() {
    printf("Bem vindo, insira sua senha para abrir o cofre!");

    while (tentativas < 3) //Looping de tentativas
    {
        for (unsigned int deslizamentos = 0; deslizamentos < 5; deslizamentos++) //Loop de deslizamentos
        {
            /* code */
        }
        
        
    }
    
    return 0;
}