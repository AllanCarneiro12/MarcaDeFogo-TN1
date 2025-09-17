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
//Eu acho que o struct pode ser bom pra fazer o menu
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
//Será que precisa colocar isso dentro do struct? ou só assim funciona?
//Ou tem que colocar o apelido e colocar no scanf;
if(eixo == 1){
printf("Digite o numero do Pneu Dianteiro Esquerdo: ")//[0][0]
scanf("%d", &pneuDianteiroEsquerdo);
printf("Digite o numero do Pneu Dianteiro Direito: ")//[0][4]
scanf("%d", &pneuDianteiroDireito);
printf("Digite o numero do Pneu Traseiro Externo Esquerdo 1: ")//[1][1]
scanf("%d", &pneuTraseiroExternoEsquerdo1;);
printf("Digite o numero do Pneu Traseiro Interno Esquerdo 1: ")//[1][2]
scanf("%d", & pneuTraseiroInternoEsquerdo1);
printf("Digite o numero do Pneu Traseiro Interno Direito 1: ")//[1][3]
scanf("%d", &pneuTraseiroInternoDireito1);
printf("Digite o numero do Pneu Traseiro Externo Direito 1: ")//[1][4]
scanf("%d", &pneuTraseiroExternoDireito1);
printf("Digite o numero do Pneu Traseiro Externo Esquerdo 2: ")//[2][1]
scanf("%d", &pneuTraseiroExternoEsquerdo2);
printf("Digite o numero do Pneu Traseiro Interno Esquerdo 2: ")//[2][2]
scanf("%d", &pneuTraseiroInternoEsquerdo2);
printf("Digite o numero do Pneu Traseiro Interno Direito 2: ")//[2][3]
scanf("%d", &pneuTraseiroInternoDireito2);
printf("Digite o numero do Pneu Traseiro Externo Direito 2: ")//[2][4]
scanf("%d", &pneuTraseiroExternoDireito2);

}

//Ou dava pra tentar assim:
/*0 1 2 3
4 5 6 7
8 9 10 11*/
if(eixo == 1)
{
    int truck [3][4];
    int i, j;
    for(i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("Digite o numero dos pneus da frente:");
            scanf("%d", truck[0][0]);
            scanf("%d", truck[0][4]);
        }
    }
}
    


    return 0;
}
