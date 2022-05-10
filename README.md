# Exercicios-de-Lista-Ativ4

<h2>Problema</h2>

Em uma lista A temos um conjunto de elementos inteiros positivos ou não (A1, A2, . . . , An). Elabore uma função que consiga encontrar neste conjunto a máxima soma.

<h2>Resolução</h2>

A resolução deste problema consiste em:
<li>Ler um número X de números do usuário (foram usados 5 números no programa, mas a quantidade pode ser editada no "lista.h" substituindo "MAXTAM" pelo número desejado);</li>
<li>O programa mostra a lista digitada e seguida chama um método chamado "Verifica" para descobrir qual sequência gera a máxima soma;</li>
<li>O método "Verifica" consiste em dois "for" para verificar qual a sequência gera a maior soma. Detalhe importante para a variável chamada "maxSum", onde recebe um valor mínimo para uma variável inteira, para que qualquer número seja maior que ele. Caso digite um número menor, consistirá em um número menor que o tipo "int" suporta;</li>
<li>A saída do programa retorna a soma máxima que uma sequência pode gerar.</li>


<h2>Compilação e Execução</h2>

O progama disponibilizado possui um arquivo Makefile que realiza todo o procedimento de compilação e execução. Para tanto, temos as seguintes diretrizes de execução:


| Comando                |  Função                                                                                           |                     
| -----------------------| ------------------------------------------------------------------------------------------------- |
|  `make clean`          | Apaga a última compilação realizada contida na pasta build                                        |
|  `make`                | Executa a compilação do programa utilizando o gcc, e o resultado vai para a pasta build           |
|  `make run`            | Executa o programa da pasta build após a realização da compilação                                 |
