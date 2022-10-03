#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 22

unsigned int tentativas = 1;
unsigned int numerosVisiveis[] = {
    0,
    1,
    5,
    7,
    9,
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
int senha[] = {4, 4, 4, 4, 4};
unsigned int numerosVerdadeiros[] = {0, 1, 5, 7, 9};
unsigned int senhaDigitada[TAMANHO]; //Podem ser digitados 22 digitos
unsigned int casaDesejada = 0;
int main() {
    printf("Bem vindo, insira sua senha para abrir o cofre! \n \n");
    fflush(stdout);
    printf("Barra de números \n");
    fflush(stdout);

    while (tentativas < 4) //Looping de tentativas
    {
        for (unsigned int deslizamentos = 0; deslizamentos < 4; deslizamentos++) //Loop de deslizamentos
        {
            if(deslizamentos > 0) {
                    system("cls");
            }

            //Printando a barra para o usuário
            for (unsigned int i = 0; i < 21; i++)
            {
                printf("[ %u ],", numerosVisiveis[i]);
                fflush(stdout);
            }
                //Pede posição
                printf("\n \nFaça seu %uº deslizamento para a casa: ", deslizamentos+1);
                fflush(stdout);
                //Pega posição
                scanf("%u", &casaDesejada);
                printf("Indo até a %uº casa \n", casaDesejada);

            for (unsigned int i = 0; i < casaDesejada; i++) //Indo até a casa desejada e pegando cada valor que passou
            {
                switch(numerosVisiveis[i]){
                    case 0:
                        senha[0] = (senha[0] - 1);
                        break;
                    case 1:
                        senha[1] = (senha[1] - 1);
                        break;
                    case 5:
                        senha[2] = (senha[2] - 1);
                        break;
                    case 7:
                        senha[3] = (senha[3] - 1);
                        break;
                    case 9:
                        senha[4] = (senha[4] - 1);
                        break;
                }
                fflush(stdout);
            }
            /*
            Pede a posição
            Vai um por um até a posição
            Contabiliza cada número
            */
        }
        for(int i = 0; i<5; i++){

           printf("%i\n", senha[i]);
           fflush(stdout);
            }




        printf("%u/3 tentativas \n", tentativas);
        fflush(stdout);


        tentativas++;
    }
    printf("Cofre trancado, número de tentativas excedido");
    fflush(stdout);

    return 0;
}
