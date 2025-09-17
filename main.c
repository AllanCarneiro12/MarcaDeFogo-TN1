/*
Nomes:  Allan Carneiro da Cunha Silveira
        Isadora Voss Brugnera
        Jenifer Beatriz Nunes Ribeiro
Data: 2025-09-08
Projeto de Algoritmos 2
Descrição: Criar um sistema em linguagem C para gerenciamento de numero de fogo em pneus de um caminhão
*/

/* descrição detalhada:
01 – Criar uma tela de login e senha para poder entrar no sistema. Login e senha devem ser
fixos: Exemplo: uniavan e senha 123
02 - Solicitar o tipo de EIXO que pode ser: Truck, Toco e Carreta 03 eixos.
03 - Vincular os pneus nos eixos. O pneu é sempre um número. Esse número deve ser único.
Ou seja, não pode ter números repetidos. Esse número de pneus é o que chamamos número
de fogo (marcação de fogo usado nos pneus).
04 - Permitir realizar o rodizio entre os pneus nos eixos que pode ser: Truck, Toco e Carreta
03 eixos. Exemplo: No pneu Dianteiro esquerdo tem o pneu de número 47 e o sistema deve
permitir trocar pelo pneu 72. Feito o processo, o sistema deve permitir listar a nova
disposição dos pneus.
05 – Criar uma tela de legenda
*/

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// login e senha de acesso ao sistema
#define LOGIN "uniavan"
#define SENHA "123"
// Eu acho que o struct pode ser bom pra fazer o menu
struct Truck
{
    /*
    todas as posições com 1 representam onde há pneus na matriz
    [1][0][0][1]
    [1][1][1][1]
    [1][1][1][1]
    */
    int pneus[3][4];

    char placa[8];
};

struct Toco
{
    /*
    todas as posições com 1 representam onde há pneus na matriz
    [1][0][0][1]
    [1][1][1][1]
    */
    int pneus[2][4];

    char placa[8];
};

struct Carreta
{
    /*
    todas as posições com 1 representam onde há pneus na matriz
    [1][1][1][1]
    [1][1][1][1]
    */
    int pneus[2][4];

    char placa[8];
};

int main()
{
    system("cls || clear");
    setlocale(LC_ALL, "Portuguese");

    // sistema de login
    char login[20], senha[20];
    int tentativas = 1;

    do
    {
        printf("Login: ");
        scanf("%s", login);
        printf("Senha: ");
        scanf("%s", senha);

        if (strcmp(login, LOGIN) != 0 || strcmp(senha, SENHA) != 0)
        {
            system("cls || clear");
            printf("Login ou senha incorretos! Tente novamente.(%d)\n", tentativas++);
        }
    } while (strcmp(login, LOGIN) != 0 || strcmp(senha, SENHA) != 0); // verifica se login e senha estão corretos

    system("cls || clear");
    printf("Sistema acessado.\n");

    printf("Qual eixo será? \n 1)TRUCK\n 2)TOCO \n 3)CARRETA\n");
    int eixo;
    scanf("%d", &eixo);

    switch (eixo)
    {
    case 1:
        printf("Eixo TRUCK selecionado.\n");
        break;
    case 2:
        printf("Eixo TOCO selecionado.\n");
        break;
    case 3:
        printf("Eixo CARRETA selecionado.\n");
        break;
    default:
        printf("Eixo inválido.\n");
        break;
    }

    system("cls || clear");
    if (eixo == 1)
    {
        struct Truck trucado;

        printf("Digite a placa do caminhão:");
        scanf("%s", trucado.placa);

        // entrada dos pneus dianteiros
        printf("Digite o numero do pneu dianteiro esquerdo:");
        scanf("%d", &trucado.pneus[0][0]);
        printf("Digite o numero do pneu dianteiro direito:");
        scanf("%d", &trucado.pneus[0][3]);

        // entrada dos pneus traseiros 1
        printf("Digite o numero do pneu traseiro externo esquerdo 1:");
        scanf("%d", &trucado.pneus[1][0]);
        printf("Digite o numero do pneu traseiro interno esquerdo 1:");
        scanf("%d", &trucado.pneus[1][1]);
        printf("Digite o numero do pneu traseiro interno direito 1:");
        scanf("%d", &trucado.pneus[1][2]);
        printf("Digite o numero do pneu traseiro externo direito 1:");
        scanf("%d", &trucado.pneus[1][3]);

        // entrada dos pneus traseiros 2
        printf("Digite o numero do pneu traseiro externo esquerdo 2:");
        scanf("%d", &trucado.pneus[2][0]);
        printf("Digite o numero do pneu traseiro interno esquerdo 2:");
        scanf("%d", &trucado.pneus[2][1]);
        printf("Digite o numero do pneu traseiro interno direito 2:");
        scanf("%d", &trucado.pneus[2][2]);
        printf("Digite o numero do pneu traseiro externo direito 2:");
        scanf("%d", &trucado.pneus[2][3]);

        system("cls || clear");

        // for (int i = 0; i < 3; i++)
        // {
        //     for (int j = 0; j < 4; j++)
        //     {
        //         printf("Digite o numero dos pneus da frente:");
        //         scanf("%d", &trucado.pneus[0][0]);
        //         scanf("%d", &trucado.pneus[0][1]);
        //         scanf("%d", &trucado.pneus[0][2]);
        //         scanf("%d", &trucado.pneus[0][3]);
        //     }
        // }
    }

    return 0;
}
