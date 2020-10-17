// Este programa executa a mesma ideia da questao anterior com precisao de duas casas decimais
// Mas ao inves de usar a funcao bubblesort ele utiliza a funcao qsort

#include <stdio.h>
#include <stdlib.h>

// Funcao principal
int main(void){

//Variaveis utilizadas na execucao do programa e um ponteiro para float
int rod, num, i;
float *p;

// Declaracao da funcao auxiliar necessaria para o qsort
int ordena (const void *a , const void *b);

// Processo de interacao com o usuario em que o mesmo define quantas vezes o algoritmo sera executado
printf("Quantas rodadas? ");
scanf("%i", &rod);

// Esse laco while estabelece a condicao de que se o usuario nao digitar um numero igual zero ou negativo o programa sera executado,
// e no fim de cada rodada sera diminuido em uma unidade o valor da variavel rodada, quando esse valor chegar em zero o programa é encerrado.
// Caso seja digitado um valor de zero ou negativo no passo anterior o programa é encerrado
while (rod != 0 && rod > 0){
printf("Quantos numeros? ");
scanf("%i", &num);

// Alocacao dinamica de memoria para o ponteiro p de acordo de quantos numeros o usuario ira desejar na execucao do programa
p = (float *) malloc(num *sizeof(float));

// Laco for para o ponteiro p usando os espacos reservados na memoria alocados
for(i = 0; i < num; i++){
    p[i] = i;
}

// Laco for para interacao com o usuario, onde o qual vai digitar os numeros que deseja ser ordenados, esses numeros serao armazenados no
// ponteiro p[i]
for(i = 0; i < num; i++){
    printf("%i/%i: ", i+1 , num);
    scanf("%f", &p[i]);
}

// Chamada da funcao qsort, esta funcao recebe 4 argumentos, o primeiro argumento é um ponteiro para o primeiro elemento do array, o segundo
// é o numero de elementos deste array, o terceiro é o tamanho de cada elemento desse array e o ultimo argumento é a funcao criada necessaria
// para fazer a comparacao entre dois elementos deste array
qsort(p, num, sizeof(float), ordena);

// Laco for para impressao dos elementos do array ja ordenado
for(i = 0; i < num; i++){
    printf("%.2f ", p[i]);
}

printf("\n");

// Liberacao da memoria alocada para o ponteiro p
free(p);

// Decremento da variavel rod
rod--;
} // Fim while
return 0;
} // Fim da funcao principal

// Esta foi a funcao criada para ser utilizada juntamente com a funcao qsort, ela recebe dois numeros do array e os compara, mas ela recebe estes
// numeros com ponteiros void, entao é necessario fazer o casting com estes valores, para serem transformados no mesmo tipo do valor de origem
// os valores sao comparados, se o primeiro valor for maior que o segundo, ela retorna um valor maior que zero, se o primeiro valor for menor que
// o segundo entao ela retorna um valor menor que zero e se nenhuma das duas condicoes anteriores forem satisfeitas significa que estes dois valores
// comparados sao iguais e a funcao retorna zero
int ordena(const void *a, const void *b){
   if (*(float*)a > *(float*)b) {
      return 1;
   }     else if (*(float*)a < *(float*)b) {
         return -1;
   }        else {
            return 0;
   }
} // Fim da funcao ordena
