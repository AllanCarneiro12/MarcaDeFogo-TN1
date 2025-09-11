# Comandos em Git

## `git init`
Inicializa um repositorio git na pasta selecionada

#### `git init -b main`
inicializa um repositorio na pasta e renomeia a branch princial para "main" (convenção)

caso tenha inicado o git sem renomear a branch para "main", pode-se usar do comando `git branch -m main`

## `git config`
configura o git com informações do usuário, é necessário configurar o nome e email do usuário para que os commits sejam atribuídos corretamente

`git config --global user.name "Seu Nome"` define o nome do usuário globalmente (para todos os repositórios)
`git config --global user.email "seuemail@exemplo.com"` define o email do usuário globalmente (para todos os repositórios)

o parametro `--global` pode ser alterado para:
- `--system`: aplica a configuração para todos os usuários do sistema
- `--local`: aplica a configuração apenas para o repositório na pasta atual (padrão)

## `git remote add origin <link/caminho>`
adiciona um repositorio remoto (por muitas vezes o github) e nomeia como "origin" (convenção)

## `git clone <link/caminho>`
clona um repositório remoto (por muitas vezes o github) para o diretório local

## `git add <arquivos>`
adiciona arquivos à serem armazenados/"trackeados" pelo repositorio git 

`git add .` adiciona todos os arquivos da pasta atual e subpastas para serem "trackeados" pelo git

## `git commit -m "mensagem"`
cria um novo commit com as alterações adicionadas e uma mensagem descritiva sobre o commit

pode-se usar `git commit -am "mensagem"` para adicionar e commitar todas as alterações em um único comando, mas só funciona para arquivos já "trackeados" pelo git, não sendo necessário usar o `git add` para esses arquivos

## `git status`
mostra o estado atual do repositório, incluindo arquivos modificados, não rastreados e prontos para commit

`git status -s` mostra o estado atual do repositório de forma resumida

## `git log`
mostra o histórico de commits do repositório

`git log --oneline` mostra o histórico de commits em uma linha por commit, facilitando a visualização

## `git push -u origin main`
envia os commits locais para o repositorio remoto "origin" na branch "main"
o `-u` serve para definir a branch "main" e o repositório "origin" como padrão para futuros pushes, assim não sendo necessário especificar o repositório e a branch toda vez

## `git pull origin main`
puxa as alterações do repositório remoto "origin" na branch "main" para o repositório local, integrando as mudanças

caso já tenha sido usado o `-u` no push, pode-se usar apenas `git push` ou `git pull` para enviar ou puxar as alterações da branch padrão, não sendo necessário especificar o repositório e a branch toda vez.
