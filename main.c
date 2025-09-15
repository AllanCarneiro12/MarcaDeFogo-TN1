/*
Nomes:  Allan Carneiro da Cunha Silveira
        Isadora Voss Brugnera
        jenifer
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
    int pneuDianteiroEsquerdo;
    int pneuDianteiroDireito;
    int pneuTraseiroExternoEsquerdo1;
    int pneuTraseiroInternoEsquerdo1;
    int pneuTraseiroInternoDireito1;
    int pneuTraseiroExternoDireito1;
    int pneuTraseiroExternoEsquerdo2;
    int pneuTraseiroInternoEsquerdo2;
    int pneuTraseiroInternoDireito2;
    int pneuTraseiroExternoDireito2;

    int pneus[3][4];
};

struct Toco
{
    int pneuDianteiroEsquerdo;
    int pneuDianteiroDireito;
    int pneuTraseiroExternoEsquerdo;
    int pneuTraseiroInternoEsquerdo;
    int pneuTraseiroInternoDireito;
    int pneuTraseiroExternoDireito;

    int pneus[2][4];
};

struct Carreta
{
    int pneuTraseiroExternoEsquerdo1;
    int pneuTraseiroInternoEsquerdo1;
    int pneuTraseiroInternoDireito1;
    int pneuTraseiroExternoDireito1;
    int pneuTraseiroExternoEsquerdo2;
    int pneuTraseiroInternoEsquerdo2;
    int pneuTraseiroInternoDireito2;
    int pneuTraseiroExternoDireito2;

    int pneus[2][4];
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
    scanf("%d",&eixo);
    
    switch(eixo){
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
    
    return 0;
}
