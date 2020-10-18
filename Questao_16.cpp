// Este programa mede o tempo dos programas feitos nas questoes 13 e 14
// Foi feito teste com um vetor de 50 elementos, e o algoritmo bubblesort executou em 0,022s já o algoritmo qsort executou este mesmo teste
// em 0,013s , comprovando que o algoritmo qsort é mais rapido que o bubblesort, isto se deve ao numero de comparacoes feitas no bubblesort
// que sao muito mais do que em relacao ao qsort

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Questao 13 algoritmo de ordenacao bubblesort
int main(void){
clock_t  t;
int rod, num, i;
float *p;


void bubble_sort (float *, int n);

printf("Quantas rodadas? ");
scanf("%i", &rod);

while (rod != 0 && rod > 0){
printf("Quantos numeros? ");
scanf("%i", &num);

p = (float *) malloc(num *sizeof(float));

for(i = 0; i < num; i++){
    p[i] = i;
}

for(i = 0; i < num; i++){
    printf("%i/%i: ", i+1 , num);
    scanf("%f", &p[i]);
} // for i

// Medicao do tempo de execucao
t = clock();
bubble_sort (p, num);
t = clock() - t;

for(i = 0; i < num; i++){
    printf("%.2f ", p[i]);
}

printf("\n");
printf("O tempo de execucao de bubblesort %.4lf s", ((double)t/(CLOCKS_PER_SEC/1000)));
printf("\n");

free(p);
rod--;
} // for j
return 0;
} // main

// Funcao bubble sort
void bubble_sort (float *v, int n){
    int a, b;
    float aux = 0.0f;

for (a = 0; a < n - 1; a++) {

    for (b = 0; b < n - 1; b++) {

        if (v[b] > v[b+1]) {
            aux  = v[b+1];
            v[b+1] = v[b];
            v[b] = aux;
            } //if
        } //for b
    } // for a
} // funcao bubble

// Questao 14 algoritmo qsort
int main(void){

clock_t t;
int rod, num, i;
float *p;


int ordena (const void *a , const void *b);


printf("Quantas rodadas? ");
scanf("%i", &rod);


while (rod != 0 && rod > 0){
printf("Quantos numeros? ");
scanf("%i", &num);


p = (float *) malloc(num *sizeof(float));

for(i = 0; i < num; i++){
    p[i] = i;
}

for(i = 0; i < num; i++){
    printf("%i/%i: ", i+1 , num);
    scanf("%f", &p[i]);
}

// Medicao do tempo de execucao
t = clock();
qsort(p, num, sizeof(float), ordena);
t = clock() - t;

for(i = 0; i < num; i++){
    printf("%.2f ", p[i]);
}

printf("\n");
printf("O tempo de execucao de qsort %.4lf s", ((double)t/(CLOCKS_PER_SEC/1000)));
printf("\n");

free(p);

rod--;
} // Fim while
return 0;
} // Fim da funcao principal

int ordena(const void *a, const void *b){
   if (*(float*)a > *(float*)b) {
      return 1;
   }     else if (*(float*)a < *(float*)b) {
         return -1;
   }        else {
            return 0;
   }
} // Fim da funcao ordena



