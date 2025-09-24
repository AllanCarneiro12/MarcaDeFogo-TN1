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
    [1][1][1][1]
    */
    int pneus[3][4];

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

    // escolha do eixo
    int eixo;
    do
    {
        printf("Qual eixo será? \n 1)TRUCK\n 2)TOCO \n 3)CARRETA\n");
        scanf("%d", &eixo);
    
        switch (eixo)
        {
        case 1:
            system("cls || clear");
            printf("Eixo TRUCK selecionado.\n");
            break;
        case 2:
            system("cls || clear");
            printf("Eixo TOCO selecionado.\n");
            break;
        case 3:
            system("cls || clear");
            printf("Eixo CARRETA selecionado.\n");
            break;
        default:
            system("cls || clear");
            printf("Eixo inválido.\n");
            break;
        }
    } while (eixo < 1 || eixo > 3);

    // entrada dos pneus
    if (eixo == 1)
    {
        struct Truck trucado;

        printf("Digite a placa do caminhão:");
        scanf("%s", trucado.placa);

        printf("Digite o numero do pneu dianteiro esquerdo:");
        scanf("%d", &trucado.pneus[0][0]);
        printf("Digite o numero do pneu dianteiro direito:");
        scanf("%d", &trucado.pneus[0][3]);

        printf("Digite o numero do pneu traseiro externo esquerdo 1:");
        scanf("%d", &trucado.pneus[1][0]);
        printf("Digite o numero do pneu traseiro interno esquerdo 1:");
        scanf("%d", &trucado.pneus[1][1]);
        printf("Digite o numero do pneu traseiro interno direito 1:");
        scanf("%d", &trucado.pneus[1][2]);
        printf("Digite o numero do pneu traseiro externo direito 1:");
        scanf("%d", &trucado.pneus[1][3]);

        printf("Digite o numero do pneu traseiro externo esquerdo 2:");
        scanf("%d", &trucado.pneus[2][0]);
        printf("Digite o numero do pneu traseiro interno esquerdo 2:");
        scanf("%d", &trucado.pneus[2][1]);
        printf("Digite o numero do pneu traseiro interno direito 2:");
        scanf("%d", &trucado.pneus[2][2]);
        printf("Digite o numero do pneu traseiro externo direito 2:");
        scanf("%d", &trucado.pneus[2][3]);

        system("cls || clear");
    }
    else if (eixo == 2)
    {
        struct Toco caminhaoToco;

        printf("Digite a placa do caminhão: ");
        scanf("%s", caminhaoToco.placa);

        printf("Digite o numero do pneu dianteiro esquerdo: ");
        scanf("%d", &caminhaoToco.pneus[0][0]);
        printf("Digite o numero do pneu dianteiro direito: ");
        scanf("%d", &caminhaoToco.pneus[0][3]);

        printf("Digite o numero do pneu traseiro externo esquerdo: ");
        scanf("%d", &caminhaoToco.pneus[1][0]);
        printf("Digite o numero do pneu traseiro interno esquerdo: ");
        scanf("%d", &caminhaoToco.pneus[1][1]);

        printf("Digite o numero do pneu traseiro interno direito: ");
        scanf("%d", &caminhaoToco.pneus[1][2]);
        printf("Digite o numero do pneu traseiro externo direito: ");
        scanf("%d", &caminhaoToco.pneus[1][3]);

        system("cls || clear");
    }
    else if (eixo == 3)
    {
        struct Carreta carreta;

        printf("Digite a placa da carreta: ");
        scanf("%s", carreta.placa);

        printf("Digite o numero do pneu traseiro externo esquerdo 1: ");
        scanf("%d", &carreta.pneus[0][0]);
        printf("Digite o numero do pneu traseiro interno esquerdo 1: ");
        scanf("%d", &carreta.pneus[0][1]);

        printf("Digite o numero do pneu traseiro interno direito 1: ");
        scanf("%d", &carreta.pneus[0][2]);
        printf("Digite o numero do pneu traseiro externo direito 1: ");
        scanf("%d", &carreta.pneus[0][3]);

        printf("Digite o numero do pneu traseiro externo esquerdo 2: ");
        scanf("%d", &carreta.pneus[1][0]);
        printf("Digite o numero do pneu traseiro interno esquerdo 2: ");
        scanf("%d", &carreta.pneus[1][1]);

        printf("Digite o numero do pneu traseiro interno direito 2: ");
        scanf("%d", &carreta.pneus[1][2]);
        printf("Digite o numero do pneu traseiro externo direito 2: ");
        scanf("%d", &carreta.pneus[1][3]);

        printf("Digite o numero do pneu traseiro externo esquerdo 3: ");
        scanf("%d", &carreta.pneus[2][0]);
        printf("Digite o numero do pneu traseiro interno esquerdo 3: ");
        scanf("%d", &carreta.pneus[2][1]);

        printf("Digite o numero do pneu traseiro interno direito 3: ");
        scanf("%d", &carreta.pneus[2][2]);
        printf("Digite o numero do pneu traseiro externo direito 3: ");
        scanf("%d", &carreta.pneus[2][3]);

        system("cls || clear");
    }

    int menu;
    // sistema de menu
    do
    {

        printf("Menu:\n");
        printf("1. Mostrar pneus\n");
        printf("2. Rodizio de pneus\n");
        printf("0. Sair\n");
        printf("Escolha uma opicao: ");
        scanf("%d", &menu);
        system("cls || clear");

        if (menu == 1)
        {
            if (eixo == 1) // Se for truck ele entra nesse if
            {
                struct Truck trucado;

                printf("Listagem dos pneus: \n");
                printf("============Frente=============\n");

                for (int i = 0; i < 3; i++)
                {
                    for (int j = 0; j < 4; j++) // Laço para percorrer as linhas e colunas.
                    {
                        if ((i == 0 && (j == 0 || j == 3)) || i > 0) // Verifica quais posições estão preenchidas, já que no
                        {                                            //  caminhão truck há duas posições na dianteira vazias.
                            printf("[%5d] ", trucado.pneus[i][j]);
                        }
                        else
                        {
                            printf("[-----] "); // Imprimindo as posições vazias.
                        }
                    }
                    printf("\n");
                }
                printf("==========={%7s}===========\n", trucado.placa); // Imprime a placa do caminhão.
            }
            else if (eixo == 2) // Mesma lógica do anterior, só que para opção Toco.
            {
                struct Toco caminhaoToco;

                printf("\nListagem dos pneus: \n");
                printf("============Frente=============\n");

                for (int i = 0; i < 2; i++)
                {
                    for (int j = 0; j < 4; j++)
                    {
                        if ((i == 0 && (j == 0 || j == 3)) || i == 1)
                        {
                            printf("[%5d] ", caminhaoToco.pneus[i][j]);
                        }
                        else
                        {
                            printf("[-----] ");
                        }
                    }
                    printf("\n");
                }
                printf("==========={%7s}===========\n", caminhaoToco.placa);
            }
            else if (eixo == 3) // Mesma lógica do anterior, só que para opção Carreta.
            {
                struct Carreta carreta;

                printf("\nListagem dos pneus: \n");
                printf("============Frente=============\n");

                for (int i = 0; i < 3; i++)
                {
                    for (int j = 0; j < 4; j++)
                    {
                        printf("[%5d] ", carreta.pneus[i][j]);
                    }
                    printf("\n");
                }
                printf("==========={%7s}===========\n", carreta.placa);
            }
        }
        else if(menu == 2) //para o rodizio de pneus
        {
           int pneu1, pneu2;//valores de pneus a serem trocados
           int i1=-1, j1=-1, i2=-1, j2 = -1 //o -1 verifica se os valores exitem na matriz
         if (eixo == 1) // Se for truck ele entra nesse if
            {
                struct Truck trucado;
                printf("\nDigite o primeiro pneu a trocar: ");
                scanf("%d", &pneu1);
                printf("Digite o segundo pneu a trocar: ");
                scanf("%d", &pneu2);

                //Pegar as posicoes dos pneus
                for (int i = 0; i < 3; i++)
                {
                    for (int j = 0; j < 4; j++) 
                    {
                        if(trucado.pneus[i][j]==pneu1)
                        {
                            i1 = i;
                            j1 = j;
                        }
                        if(trucado.pneus[i][j]==pneu2)
                        {
                            i2 = i;
                            j2 = j;
                        }
                       
                    }
                    printf("\n");
                }
                //verifica se as posicoes existem e troca de lugar
                if(i1 != -1 && i2 != -1)
                {
                    int temp = trucado.pneus[i1][j1]; 
                  trucado.pneus[i1][j1] = trucado.pneus[i2][j2];
                  trucado.pneus[i2][j2] = temp;
                
                //mostra os pneus após a troca
                printf("Mostrar pneus após a troca:\n");
                for(i=0; i<3; i++)
                {
                    for(j=0; j<4; j++)
                    {
                        printf("%d\t",trucado.pneus[i][j]);
                    }
                    printf("\n");
                }
            }
            else{
                printf("Pneus não encontrados!");
            }
            }
        } 


    } while (menu != 0);

    printf("Saindo do sistema...\n");

    return 0;
}