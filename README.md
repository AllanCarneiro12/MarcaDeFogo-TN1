# Marca de Fogo — Gerenciamento de pneus (Algoritmos 2)

Sistema em linguagem C para gerenciar o “número de fogo” dos pneus de caminhões, desenvolvido como projeto da disciplina de Algoritmos 2.

> Data de finalização do projeto: 2025-09-26

## Sobre o projeto

O programa permite controlar a identificação única (número de fogo) dos pneus em diferentes tipos de eixo:
- Truck
- Toco
- Carreta (3 eixos)

Há uma tela de login com credenciais fixas e um menu para cadastro, listagem, rodízio e legenda de posições.

## Funcionalidades

- Login fixo: usuário `uniavan` e senha `123`.
- Seleção do tipo de eixo (Truck, Toco, Carreta 3 eixos).
- Cadastro dos pneus por posição com validação:
  - Cada pneu recebe um número inteiro positivo.
  - Não é permitido repetir números de pneu.
- Listagem da disposição atual dos pneus por eixo.
- Rodízio (troca) entre dois pneus informados pelo número.
- Legenda das posições na matriz de pneus.

## Como usar (fluxo básico)

1. Execute o programa e faça login (uniavan / 123).
2. Selecione o tipo de eixo (1=Truck, 2=Toco, 3=Carreta).
3. Informe a placa e cadastre os números dos pneus nas posições solicitadas.
4. Use o menu para:
   - 1: Mostrar pneus
   - 2: Rodízio de pneus (trocar dois números)
   - 3: Ver a legenda das posições
   - 0: Sair

## Como compilar e executar

Você pode compilar com Code::Blocks ou com GCC (MinGW) no Windows.

### Code::Blocks

- Abra o projeto (`MarcaDeFogo-TN1.cbp`) no Code::Blocks.
- Clique em Build (F9) para compilar e em Run (Ctrl+F10) para executar.
- O executável costuma ser gerado em `bin/Debug` ou `bin/Release` do projeto.

### GCC (Windows PowerShell)

Certifique-se de ter o MinGW (GCC) no PATH. No diretório do projeto, rode:

```powershell
# Compilar
gcc .\main.c -o .\MarcaDeFogo-TN1.exe

# Executar
.\MarcaDeFogo-TN1.exe
```

## Estrutura de dados

O programa modela as posições de pneus com matrizes 2D (int pneus[i][j]) em structs diferentes para cada eixo:
- `struct Truck` — 3x4, dianteira com duas posições vazias.
- `struct Toco` — 2x4, dianteira com duas posições vazias.
- `struct Carreta` — 3x4, todas as posições usadas.

## Contribuidores

- Allan Carneiro da Cunha Silveira
- Isadora Voss Brugnera
- Jenifer Beatriz Nunes Ribeiro

---

Projeto: MarcaDeFogo-TN1 — arquivo principal: `main.c`.