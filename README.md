# solid-alura-rh

## Sobre o projeto
Projeto de estudos SOLID do curso https://cursos.alura.com.br/course/solid-orientacao-objetos-java
Os fontes foram adaptados de Java para C++, com o objetivo de treinar mais a linguagem.

Para compilar, necessário:
CMAKE

## Aprendizados

Lista dos aprendizados em cada aula

### Aula 1 - Conceitos POO
**Coesão:** Princípio da Resposabilidade Única (SRP). Uma classe com pouca coesão se torna complexa e dificulta manutenção e testabilidade.
Cada classe deve ter uma responsabilidade principal

**Encapsulamento:** Falta de encapsulamento faz com que a interface da classe seja complexa e torna os dados da classe mais expostos.
A classe não deve expor mais do que o necessário para ter uma interface simples e protegida.

**Acoplamento:** O alto acoplamento torna a classe complexa e dificulta manutenção e testabilidade.
A classe deve ter o menor número de dependências possível. Aplicando SRP e Encapsulamento, é mais fácil diminuir o acoplamento

### Aula 2 - Buscando o SRP
- Foi observado que a classe Funcionário tinha uma regra de negócio dentro dela, que representam situações em que o Salário do Funcionário podem ser atualizadas.
- Optou-se por extrair essa funcionalidade num arquivo externo ReajusteSalarial, que é responsável por validar a situação em que um aumento salarial pode ou não ocorrer
- Após essa alteração, a classe Funcionário apenas representa um funcionário e não verifica regra de negócio para aumento salarial
- A nova função `reajustaSalarioDeFuncionario` é responsável por validar quando o salário do funcionário pode ser reajustado ou não, e realiza esse reajuste se as condições permitirem

### Aula 3 - Open Closed Principle
- Ao adicionar uma nova validação, a função `ReajusteSalarial` poderia crescer indefinidamente.
- Separar as validações da função `ReajusteSalarial`, de forma a cada validação ser uma função separada.
- Optou-se por não criar classes separadas como na aula, pois no C++ não é necessário criar classes vazias. Isso ainda facilita a utilização da função `ReajusteSalarial` pois o cliente não precisa fornecer uma lista de validações para validar. Isso facilita a interface e torna a "classe" mais profunda.

### Aula 4 - Principio de Substituição de Liskov
- O Princípio de Substituição de Liskov diz que uma função g(x), em que x é do tipo T, deve ter o mesmo comportamento se chamado com g(y) caso y de tipo S e S seja subtipo de T.
- Isso quer dizer que devemos ser atentos ao utilizar Herança em tipos que herdam de uma classe base mas não podem ter as mesmas funcionalidades que a classe base.
- Um exemplo disso seria a classe Terceirizado criada nessa aula. Se Terceirizado herdasse de Funcionário, ela teria funcionalidades de `ajusteSalarial()` e `promove()`. No entanto, a regra de negócio não permite que um Terceirizado tenha essas funcionalidades.
- A solução nesse caso foi extrair o conteúdo comum entre Terceirizado e Funcionário para uma outra estrutura, a `DadosPessoais` e utilizar composição para construir essas classes.
