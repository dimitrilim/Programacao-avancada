#include <stdio.h>

int main() {
int valor, idade, vetor[3], *p1, *p4, *p5;
float temp, *p2;
char aux,*p3,aux2,  *nome = "Ponteiros";

/* (a) R:20
Neste caso o ponteiro p1 está apontando no endereço de memoria da variavel valor, entao quando é atribuido o valor 20 ao ponteiro
a variavel valor fica com o valor 20 também, sendo mostrado o valor 20 na saída para o usuário */
valor = 10;
p1 = &valor;
*p1 = 20;
printf("%d \n", valor);

/* (b) R:29,0
Muito parecido com o caso anterior, a diferença é que neste caso utiliza valores com ponto flutuante (float), com precisao de uma casa,
o ponteiro p2 aponta no endereco da variavel temp e na linha seguinte é atribuido um valor para o ponteiro p2 e consequentemente a variavel
temp ira ter esse mesmo valor */
temp = 26.5;
p2 = &temp;
*p2 = 29.0;
printf("%.1f \n", temp);

/* (c) R:P
Neste caso o ponteiro p3 aponta no primeiro elemento do endereco de memoria da string que é um ponteiro para char,depois uma variavel auxiliar
é atribuida o valor do ponteiro p3, sendo mostrado para o usuário a letra P que é a primeira letra da string "Ponteiros"
*/
p3 = &nome[0];
aux = *p3;
printf("%c \n", aux);

/* (d) R:e
Parecido com o caso anterior, só que neste caso é mostrada a quinta letra da string "Ponteiros", será mostrado para o usuário a letra e
 */
p3 = &nome[4];
aux = *p3;
printf("%c \n", aux);

/* (e) R:P
O ponteiro p3 está apontando para o array de caracteres, em um array o o ponteiro aponta no endereco de memoria do primeiro membro
deste vetor, neste caso é a letra P  */
p3 = nome;
aux2 = *p3;
printf("%c \n", aux2);

/* (f) R:e
Do caso anterior p3 ja estava carregando o endereco de memoria do primeiro elemento do array nome, andando quatro casas nesse array
o ponteiro p3 vai apontar para o endereco deste elemento ,neste caso é a letra e
 */
p3 = p3 + 4;
printf("%c \n", *p3);

/* (g) R:t
O ponteiro p3 está carregando o endereco de memoria do caso anterior, agora p3 é decrescido em 1 unidade apontando para o endereco de memoria
do elemento anterior neste caso a letra t
  */
p3--;
printf("%c \n", *p3);

/* (h) R:31
Inicialmente foram atribuidas constantes para o array vetor, depois um ponteiro aponta para o array vetor, ele está apontando no endereco de
memoria do primeiro elemento do array, atribuindo a uma variavel idade o valor deste primeiro elemento do ponteiro que neste caso é o numero 31
*/
vetor[0] = 31;
vetor[1] = 45;
vetor[2] = 27;
p4 = vetor;
idade = *p4;
printf("%d \n", idade);

/* (i) R:45
Usando um ponteiro p5 atribuimos a ele o endereco de memoria do ponteiro p4 na posicao 1, assim o ponteiro p5 esta apontando no 2 endereco de
memoria do array vetor, atribuindo este valor a uma variavel idade, o valor deste elemento é 45
 */
p5 = p4 + 1;
idade = *p5;
printf("%d \n", idade);

/* (j) R:27
Agora o ponteiro p4 aponta no endereco de memoria do ponteiro p5 somado mais um, neste caso será o terceiro elemento do array vetor, atribuindo
o valor de p4 a uma variavel idade o valor deste elemento é 27 */
p4 = p5 + 1;
idade = *p4;
printf("%d \n", idade);

/* (l) R:31
O ponteiro p4 está carregando o endereco de memoria do caso anterior, neste caso ele anda duas unidades para tras, apontando no endereco de
memoria primeiro elemento do array vetor, atribuindo o valor de p4 a uma variavel idade, o valor deste elemento é 31 */
p4 = p4 - 2;
idade = *p4;
printf("%d \n", idade);

/* (m) R:45
Neste caso o ponteiro p5 está apontando diretamente para o endereco de memoria do array vetor, sem o intermedio de outros ponteiros, o ponteiro
p5 é atribuido o valor do endereco de memoria do vetor no segundo elemento, para o usuario é mostrado o valor do ponteiro p5, neste caso é 45
*/
p5 = &vetor[2] - 1;
printf("%d \n", *p5);

/* (n) R:27
Neste caso o ponteiro p5 está sendo incrementado sendo deslocado uma unidade na memoria, neste caso o ponteiro está apontando para o terceiro
elemento do array vetor, mostrando para o usuario o valor de 27
 */
p5++;
printf("%d \n", *p5);
return(0);
}
