#include <stdlib.h>
#include <stdio.h>

int main(void){
int n, s, i;
int v1[n], v2[n], v3[n];
int *pv1, *pv2, *pv3;
void soma_vetor(int v1[], int v2[], int v3[], int n);

printf("Digite a quantidade de numeros:");
scanf("%i", &n);

pv1 = (int *)malloc(n* sizeof(int));
for(i = 0; i< n; i++){
pv1[i] = i;
}

for(int i = 0; i< n; i++){
    printf("Digite o %i numero do vetor 1: ", i+1);
        scanf("%i", &pv1[i]);
}

pv2 = (int *)malloc(n * sizeof(int));
for(i = 0; i< n; i++){
pv2[i] = i;
}
printf("\n");

for(int j = 0; j< n; j++){
    printf("Digite o %i numero do vetor 2: ", j+1);
        scanf("%i", &pv2[j]);
}

pv3 = (int *)malloc(n * sizeof(int));
for(i = 0; i< n; i++){
pv3[i] = i;
}


soma_vetor(pv1, pv2, pv3, n );

printf("A soma dos vetores 1 e 2 é:");

for(int k= 0; k< n; k++){
printf("%i ", pv3[k] );
}
return 0;
}



void soma_vetor(int v1[], int v2[], int v3[], int n){
    for(int s = 0; s < n; s++){
        v3[s] = v1[s] + v2[s];
    }
}

