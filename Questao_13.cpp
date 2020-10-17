#include <stdio.h>
#include <stdlib.h>

int main(void){
int rod, num, i;
float *p;

void bubble_sort (float *, int n);

printf("Quantas rodadas? ");
scanf("%i", &rod);

while (rod != 0){
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

bubble_sort (p, num);

for(i = 0; i < num; i++){
    printf("%.2f ", p[i]);
}

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
