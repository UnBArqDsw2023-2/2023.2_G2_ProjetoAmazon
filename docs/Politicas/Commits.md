# Política de *Commits* e *Branching*

## Versionamento

| **Versão** | **Data** | **Modificações** | **Autor(es)** |
| :--: | :--: | :--: | :--: |
| 0.1 | 08/09/2023 | Criação do Documento | Gabriel Mariano |
| 0.2 | 09/09/2023 | Criação da política de *commits* e *branching* | Gabriel Mariano |

*Tabela 1: Versionamento*

## Introdução

O presente projeto será desenvolvido coletivamente por todos os integrantes de sua equipe. Para a garantia de uma boa cooperação entre os membros e um consequente bom andamento do projeto, faz-se necessária a elaboração de uma política de *commits* e *branching*.

Deste modo, este documento visa estabelecer regras e princípios cuja adoção facilitará a organização do repositório.

## Política de *Commits*

Para o estabelecimento de uma política de *commits*, serão observados alguns dos princípios da especificação [**Conventional Commits**](https://www.conventionalcommits.org/en/v1.0.0/) e opcionais derivados do guia [**GitMoji**](https://gitmoji.dev/).

A estrutura básica de um *commit* (adaptada do [**Conventional Commits**](https://www.conventionalcommits.org/en/v1.0.0/)) será:

```
tipo: descrição das alterações
```

Como alternativa, poderão ser adotados elementos do [**GitMoji**](https://gitmoji.dev/) no lugar do *tipo* do *commit*:

```
:gitmoji: descrição das alterações
```

Dentre os possíveis tipos, podemos ter:

| **Tipo (texto)** | **GitMoji** | **Uso** |
| :--: | :--: | :--: |
| feat | :sparkles: ```:sparkles:``` | *Feature* implementada no projeto |
| doc | :memo: ```:memo:``` | Criação ou atualização de documentação do projeto |
| fix | :bug: ```:bug:``` | Correção de erro no projeto |
| str | :art: ```:art:``` | Alterações na estrutura ou organização do projeto (incluindo *wiki* do *GitPages*) |

Para eventuais situações onde o *commit* aborde questões que não se encaixem nos tipos supracitados, recomenda-se que sejam seguidos os demais princípios descritos no [**Conventional Commits**](https://www.conventionalcommits.org/en/v1.0.0/) ou no [**GitMoji**](https://gitmoji.dev/).

Quanto à descrição das alterações, estas devem ser sucintas e descritivas, apresentando um resumo das modificações que o *commit* faz (em português).

## Políticas de *Branching*

Para a política de *branching*, serão observados alguns princípios estabelecidos no artigo do [**GitKraken**](https://www.gitkraken.com/learn/git/best-practices/git-branch-strategy), os quais serão adaptados para o escopo de nosso projeto.

Primeiramente, será absolutamente contraindicada a realização de *commits* e alterações na *branch main*, a qual deverá ser única e só poderá sofrer alterações mediante a aprovação de *pull requests* previamente revisados por integrantes do grupo.

Para além da *main*, deverão ser criadas *branches* (preferencialmente a partir da própria *main*) para a realização de alterações, as quais devem ser nomeadas conforme a seguinte estrutura:

```
tipo/nome-da-alteracao
```

Dentre os possíveis tipos, temos:
- **feat**: declara uma *branch* criada para a implementação de *features* do projeto;
- **doc**: declara uma *branch* criada para o desenvolvimento de documentação do projeto;
- **fix**: declara uma *branch* criada para a resolução de eventuais problemas encontrados no projeto;
- **str**: declara uma *branch* criada para implementação de alterações estruturais no projeto.

O **nome-da-alteracao** deverá preferencialmente ser composto por poucas (ou apenas uma) palavras significativas quanto ao contexto da *branch*.

Demais possibilidades de tipos de *branches* deverão seguir preferencialmente os princípios postos no artigo do [**GitKraken**](https://www.gitkraken.com/learn/git/best-practices/git-branch-strategy).

## Referências

"**Conventional Commits:** A specification for adding human and machine readable meaning to *commit* messages". Disponível em: <https://www.conventionalcommits.org/en/v1.0.0/>. Acesso em 09/09/2023.

"**GitMoji:** An emoji guide for your *commit* messages". Disponível em: <https://gitmoji.dev/>. Acesso em 09/09/2023.

**GitKraken**. "*What is the best Git branch strategy?*". Disponível em: <https://www.gitkraken.com/learn/git/best-practices/git-branch-strategy>. Acesso em 09/09/2023.