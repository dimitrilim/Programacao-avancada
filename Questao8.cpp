#include <stdio.h>

// Este Programa lista os elementos do array vet utilizando a ideia de ponteiros
int main(void){
int vet[] = {4,9,13};
int i;
for(i=0;i<3;i++){
printf("%d ",*(vet+i));
}
return 0;
}
// Este programa lista os enderecos de memoria em hexadecimal para cada posicao do array vet
int main(){
int vet[] = {4,9,13};
int i;
for(i=0;i<3;i++){
printf("%p ",vet+i);
}
return 0;
}
