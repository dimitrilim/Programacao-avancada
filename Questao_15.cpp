// Este programa executa a mesma ideia da questao anterior com precisao de duas casas decimais
// Mas ao inves de usar a funcao bubblesort ele utiliza a funcao qsort

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void){


int rod, num, i, n;
char v, t;
int *p;


int cresc (const void *a , const void *b);
int decres(const void *a, const void *b);
int random(int *p, char a, int b);

printf("Deseja quantos numeros? ");
scanf("%i", &num);

if (num !=0 && num > 0){
p = (int *) malloc(num *sizeof(int));
}
else
return 0;

for(i = 0; i < num; i++){
    p[i] = i;
}
printf("Deseja valores aleatorios(s para sim n para nao):");
scanf("%c", &v);
if ( v =='s'){
srand(time(NULL));
for(i = 0; i < num; i++){
printf("%i ", rand() % 100);
scanf("%i", &p[i]);
}
}
else
for(i = 0; i < num; i++){
printf("Digite o %i numero:", i+1);
scanf("%i", &p[i]);
}

printf("Ordem crescente ou decrescente(c para cresc., d para decres.):%c", t );
scanf("%c",&t );

if (t = 'c'){
qsort(p, num, sizeof(int), cresc);
}
else
{
qsort(p, num, sizeof(int), decres);
}

for(i = 0; i < num; i++){
    printf("%i ", p[i]);
}

printf("\n");
free(p);
return 0;
} // Fim da funcao principal


int cresc(const void *a, const void *b){
   if (*(float*)a > *(float*)b) {
      return 1;
   }     else if (*(float*)a < *(float*)b) {
         return -1;
   }        else {
            return 0;
   }
} // Fim da funcao cresc

int decres(const void *a, const void *b){
   if (*(int*)a < *(int*)b) {
      return 1;
   }     else if (*(int*)a > *(int*)b) {
         return -1;
   }        else {
            return 0;
   }
} // Fim da funcao decres

void random (int *p,char a, int b ){
int i;


}
