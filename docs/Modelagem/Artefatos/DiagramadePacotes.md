# Diagrama de Pacotes


## Versionamento

<center>

| **Versão** | **Data** | **Modificações** | **Autor(es)** |
| :--: | :--: | :--: | :--: |
| 0.1 | 07/10/2023 | Criação do documento e definição do template dos artefatos | Diógenes e Guilherme |
| 0.2 | 07/10/2023 | Adição da Introdução, Metodologias e a imagem do Diagrama de Pacotes | Diógenes Júnior e Guilherme |
| 0.3 | 08/10/2023 | Correção de alguns detalhe da documentação do artefato | Diógenes Júnior e Guilherme |
| 0.4 | 08/10/2023 | Revisão do artefato: pequenas correções no documento | André Corrêa, Felipe Moura e Gabriel Mariano |

*Tabela 1: Versionamento*

</center>


## Introdução

Diagramas de pacotes são diagramas estruturais comumente usados para simplificar os diagramas de classe complexos e organizar as classes em pacotes. Um pacote é uma coleção de elementos relacionados, incluindo diagramas, documentos, classes e pacotes de eventos. Além disso, o diagrama de pacotes oferece uma valiosa visibilidade de alto nível para grandes projetos e sistemas.

Um diagrama de pacotes é comumente usado para organizar os elementos de um sistema de alto nível, para que os pacotes possam ser usados ​​na organização do sistema, contendo documentos, diagramas e outros. Abaixo, listamos algumas dicas para uso do diagrama de pacotes.

- Um diagrama de pacotes pode ser usado para simplificar diagramas complexos de classe e organizar as classes em pacotes.
- Ele também pode ser usado para definir os agrupamentos entre pacotes e outros pacotes ou objetos.
- Transforma estruturas complexas de tecnologia, educação e outros campos em pacotes simplificados.

## Metodologia

O artefato foi criado por dois membros do grupo durante reuniões, tanto presenciais quanto virtuais. Eles usaram conteúdos do ambiente de aprendizado e realizaram pesquisas como referência para desenvolver o diagrama de pacotes.

<center>

| **Data e Horário** | **Ferramentas Utilizadas** | **Autores** |
| :--: | :--: | :--: |
| 06/10/2023 às 18:00 | Aplicativo de diagramação baseado na web (LucidChart) e Aplicativos de Chamadas (Discord) | Diógenes Júnior e Guilherme |

*Tabela 2: Ambiente de criação do artefato Diagrama de Pacotes*

![Diagrama-de-Pacote](../../Assets/Modelagem/Diagrama_de_Pacotes.png)

*Figura 1: Diagrama de Pacotes*

</center>

## Estrutura

O diagrama foi estruturado de acordo com cada camada do sistema

### Interface

Corresponde ao modelo da aplicação que irá apresentar os dados e as funcionalidades ao usuário. No caso, a interface corresponde a *front-end* do Sistema de Avaliação da *Amazon*.

## Sistema de Avaliação

Corresponde ao modelo *back-end* da aplicação. Basicamente, utiliza uma *API* para possibilitar a integração entre o *front-end* e a base de dados.

#### Avaliar e Visualizar

Esses pacotes estão ao um mesmo nível de abstração, pois são duas estruturas que o usuário pode utilizar no sistema. No caso em **Avaliar**, o usuário escreve uma avaliação sobre determinado produto e no caso **Visualizar**, o usuário apenas obseerva e analisar outras avaliações.

#### Pontuação e Troca

Esses pacotes importam estruturas de **Avaliar**, pois foi proposto pelo grupo uma nova funcionalidade no Sistema de Avaliação da *Amazon* de recompensar os usuários que avaliam os produtos. Decorrente disso, o pacote **Recompensa** apresenta a **Pontuação** obtida pelos usuários assim como a possibilidade de **Troca** com benefícios ou outros produtos.

## Dados

O pacote **Dados** corresponde ao *database* da aplicação, onde estão armazenados as avaliações, os dados dos usuários e as tabelas modeladas de acordo com o diagrama de classes.

## Referências Bibliográficas
> <a id="FTF1Ref" href="#FTF1">1.</a> [Aprender Arquitetura e Desenho de Software – Começando Professor(a): Milene Serrano](https://aprender3.unb.br/course/view.php?id=19535&section=1). Acessado em: 06 de outubro de 2023.

> <a id="FTF1Ref" href="#FTF1">1.</a> [GitMind](https://gitmind.com/pt/diagrama-de-pacotes.html). Acessado em: 07 de outubro de 2023.