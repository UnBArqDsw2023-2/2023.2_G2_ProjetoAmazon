# Estilo Arquitetural *Client Server*

## Versionamento

<center>

| **Versão** | **Data** | **Modificações** | **Autor(es)** |
| :--: | :--: | :--: | :--: |
| 0.1 | 30/11/2023 | Criação do documento | Felipe Moura, André Corrêa e Gabriel Mariano |

*Tabela 1: Versionamento*

</center>


## 1. Introdução

Com a proposta de demosntrar o estilo arquitetural _Client-Server_, desenvolvemos uma aplicação em [NestJs](https://nestjs.com) que recebe uma requisição http de um cliente e retorna uma _response_ contendo o conteúdo que foi solicitado.

## 2. Tecnologias

Foram utilizadas as seguintes tecnologias (o tutorial de instalação está linkado em cada tecnologia):

- [npm/node](https://nodejs.org/en/download/package-manager)
- [yarn](https://classic.yarnpkg.com/lang/en/docs/install/#debian-stable)
- [typescript](https://www.typescriptlang.org/download)
- [NestJs](https://docs.nestjs.com/first-steps)

## 3. Utilização e Demonstração

Primeiro abra o terminal com a pasta ```amazon-avaliação``` e em seguida, para instalar as dependências execute:

```
npm install
```

ou 
```
yarn install
```

Em seguida, para executar o servidor utilize o comando:

```
yarn start:dev
```

Pronto, agora o servidor deve estar recebendo requisições no endereço ```localhost:8000```.

Para fins de exemplificação foram definidas páginas para três rotas diferentes

- GET localhost:8000 
- GET localhost:8000/pontos
- GET localhost:8000/avaliacao

Tais rotas retornam o html referente a cada página.

Para uma melhor vizualização do html com sua devida formatação, é possível utilizar um browser para realizar as requisições copiando o endereço referente à barra de pesquisa.

