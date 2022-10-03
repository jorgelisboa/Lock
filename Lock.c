#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 22

unsigned int tentativas = 0;
unsigned int numerosVisiveis[] = {
    9,
    4,
    3,
    9,
    1,
    2,
    4,
    5,
    1,
    1,
    9,
    7,
    0,
    5,
    8,
    9,
    7,
    6,
    5,
    6,
    7
};
unsigned int numerosVerdadeiros[] = { //Tipo um hashmap/json número:quantidade
    0, 4,
    1, 7,
    5, 2,
    7, 1,
    9, 3
};
unsigned int senhaDigitada[TAMANHO]; //Podem ser digitados 22 digitos
unsigned int casaDesejada = 0;
int main() {
    printf("Bem vindo, insira sua senha para abrir o cofre! \n \n");
    fflush(stdout);
    printf("Barra de números \n");
    fflush(stdout);
    
    while (tentativas < 3) //Looping de tentativas
    {
        for (unsigned int deslizamentos = 0; deslizamentos < 5; deslizamentos++) //Loop de deslizamentos
        {
            //Printando a barra para o usuário
            for (unsigned int i = 0; i < 21; i++)
            {
                printf("[ %u ],", numerosVisiveis[i]);
                fflush(stdout);
            }
                //Pede posição
                printf("\n \nFaça seu %uº deslizamento para a casa: ", tentativas+1);
                fflush(stdout);
                //Pega posição
                scanf("%u", &casaDesejada);
                printf("Indo até a %uº casa \n", casaDesejada);

            for (unsigned int i = 0; i < casaDesejada; i++) //Indo até a casa desejada e pegando cada valor que passou  
            {
                printf("%u \n", numerosVisiveis[i]);
                fflush(stdout);
            }
            


            /* 
            Pede a posição
            Vai um por um até a posição
            Contabiliza cada número
            */
           deslizamentos++;
        }
        
        tentativas++;
    }
    
    return 0;
}