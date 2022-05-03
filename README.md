# solid-alura-rh

## Sobre o projeto
Projeto de estudos SOLID do curso https://cursos.alura.com.br/course/solid-orientacao-objetos-java
Os fontes foram adaptados de Java para C++, com o objetivo de treinar mais a linguagem.

Para compilar, necess�rio:
CMAKE

## Aprendizados

Lista dos aprendizados em cada aula

### Aula 1 - Conceitos POO
**Coes�o:** Princ�pio da Resposabilidade �nica (SRP). Uma classe com pouca coes�o se torna complexa e dificulta manuten��o e testabilidade.
Cada classe deve ter uma responsabilidade principal

**Encapsulamento:** Falta de encapsulamento faz com que a interface da classe seja complexa e torna os dados da classe mais expostos.
A classe n�o deve expor mais do que o necess�rio para ter uma interface simples e protegida.

**Acoplamento:** O alto acoplamento torna a classe complexa e dificulta manuten��o e testabilidade.
A classe deve ter o menor n�mero de depend�ncias poss�vel. Aplicando SRP e Encapsulamento, � mais f�cil diminuir o acoplamento

### Aula 2 - Buscando o SRP
- Foi observado que a classe Funcion�rio tinha uma regra de neg�cio dentro dela, que representam situa��es em que o Sal�rio do Funcion�rio podem ser atualizadas.
- Optou-se por extrair essa funcionalidade num arquivo externo ReajusteSalarial, que � respons�vel por validar a situa��o em que um aumento salarial pode ou n�o ocorrer
- Ap�s essa altera��o, a classe Funcion�rio apenas representa um funcion�rio e n�o verifica regra de neg�cio para aumento salarial
- A nova fun��o `reajustaSalarioDeFuncionario` � respons�vel por validar quando o sal�rio do funcion�rio pode ser reajustado ou n�o, e realiza esse reajuste se as condi��es permitirem

### Aula 3 - Open Closed Principle
- Ao adicionar uma nova valida��o, a fun��o `ReajusteSalarial` poderia crescer indefinidamente.
- Separar as valida��es da fun��o `ReajusteSalarial`, de forma a cada valida��o ser uma fun��o separada.
- Optou-se por n�o criar classes separadas como na aula, pois no C++ n�o � necess�rio criar classes vazias. Isso ainda facilita a utiliza��o da fun��o `ReajusteSalarial` pois o cliente n�o precisa fornecer uma lista de valida��es para validar. Isso facilita a interface e torna a "classe" mais profunda.