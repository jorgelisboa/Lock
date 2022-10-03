#include <stdio.h>

unsigned int tentativas = 0;
unsigned int arraySize = 22; //Tamanho da array/senha
unsigned int numerosVisiveis[arraySize];
unsigned int numerosVerdadeiros[] = { //Tipo um hashmap/json quantidade:número
    0, 4,
    1, 7,
    5, 2,
    7, 1,
    9, 3
};
unsigned int senhaDigitada[22]; //Podem ser digitados 22 digitos

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