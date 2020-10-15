// Este programa encontra valores de ponteiros e enderecos de memoria de duas formas
#include <stdio.h>

int main(void){
float vet[5] = {1.1,2.2,3.3,4.4,5.5};
float *f;
int i;
f = vet;
printf("contador/valor/valor/endereco/endereco");
for(i = 0 ; i <= 4 ; i++){
// Mostra o valor da variavel i
printf("\ni = %d",i);
// Grava o valor de  i e o local i do array vet
printf("vet[%d] = %.1f",i, vet[i]);
// Mostra o valor de i e do local i do array vet atraves de um ponteiro f
printf("*(f + %d) = %.1f",i, *(f+i));
// Mostra o endereco de memoria em hex, de cada local i do array vet
printf("&vet[%d] = %X",i, &vet[i]);
// Mostra o endereco de memoria em hex, de cada local i do array vet agora atraves do ponteiro f
printf("(f + %d) = %X",i, f+i);
}
return 0;
}
