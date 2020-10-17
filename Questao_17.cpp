//
#include <stdio.h>

int main(void){
int n, s;
int v1[n], v2[n], v3[n];
int *pv1, *pv2, *pv3;
void soma_vetor(int v1[], int v2[], int v3[], int n);

printf("Digite a quantidade de numeros:");
scanf("%i", &n);

for(int i = 0; i< n; i++){
    printf("Digite o %i numero do vetor 1: ", i+1);
        scanf("%i", (v1+i));
}

printf("\n");

for(int j = 0; j< n; j++){
    printf("Digite o %i numero do vetor 2: ", j+1);
        scanf("%i", (v2+j));
}

pv1 = v1;
pv2 = v2;
pv3 = v3;

soma_vetor(pv1, pv2, pv3, n );

//for(int k= 0; k< n; k++){

printf("A soma dos vetores 1 e 2 é: %i", *pv3 );
//}
return 0;
}




void soma_vetor(int v1[], int v2[], int v3[], int n){
    for(int s = 0; s < n; s++){
        v3[s] = v1[s] + v2[s];
    }
}

