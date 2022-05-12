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

### Aula 4 - Principio de Substitui��o de Liskov
- O Princ�pio de Substitui��o de Liskov diz que uma fun��o g(x), em que x � do tipo T, deve ter o mesmo comportamento se chamado com g(y) caso y de tipo S e S seja subtipo de T.
- Isso quer dizer que devemos ser atentos ao utilizar Heran�a em tipos que herdam de uma classe base mas n�o podem ter as mesmas funcionalidades que a classe base.
- Um exemplo disso seria a classe Terceirizado criada nessa aula. Se Terceirizado herdasse de Funcion�rio, ela teria funcionalidades de `ajusteSalarial()` e `promove()`. No entanto, a regra de neg�cio n�o permite que um Terceirizado tenha essas funcionalidades.
- A solu��o nesse caso foi extrair o conte�do comum entre Terceirizado e Funcion�rio para uma outra estrutura, a `DadosPessoais` e utilizar composi��o para construir essas classes.

### Aula 5 - Princ�pios de Invers�o de Depend�ncia (DIP) e de Separa��o de Interfaces (ISP)
- Princ�pio de Invers�o de Depend�ncia defende um m�dulo n�o deve depender da implementa��o de outro m�dulo. M�dulos devem depender de interfaces.
- Al�m disso, interfaces n�o devem depender da implementa��o, mas a implementa��o que deve depender da interface.
- Esse princ�pio casa muito bem com os princ�pios "S" e "O", de forma que se a sua classe tem apenas uma responsabilidade e possui uma interface fechada para altera��o mas aberta para extens�o, o ISP j� "vem de gra�a".
- Princ�pio de Separa��o de Interfaces defende que uma classe n�o deve implementar um m�todo que n�o precisa s� por que a sua interface (ou classe base) mudou.
- A situa��o � parecida com o que aconteceria ao criar um `Terceirizado` herdando da classe `Funcion�rio`. A classe `Terceirizado` seria obrigada a implementar m�todos que n�o fazem sentido para a abstra��o.
- Uma solu��o proposta � extrair a interface dessa classe numa nova interface, que pode ser mais gen�rica ou espec�fica que a interface anterior.
