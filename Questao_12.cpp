// Na linguagem c uma função em si nao é somente uma variavel, é possivel definir ponteiros que serao passados para esta funçao,
// estes ponteiros podem receber alguma atribuiçao, usado em matrizes, retomados por funções e assim por diante.
//Este programa simples faz a troca de valor entre duas variaveis só que usando o conceito de ponteiro para uma função

#include <stdio.h>

int main(){
int num1 = 5, num2 = 10;
void swap(int *n1, int *n2);

swap( &num1, &num2);
printf("num1 = %i\n", num1);
printf("num2 = %i", num2);
return 0;
}

void swap(int* n1, int* n2){

int temp;
temp = *n1;
*n1 = *n2;
*n2 = temp;
}
