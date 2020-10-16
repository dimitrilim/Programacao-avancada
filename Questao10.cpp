// Programa para testar as suposicoes feitas na questao 9
#include <stdio.h>

int main(void){
char xc[4], *pcx;
short int xi[4], *pix;
float xf[4], *pfx;
double xd[4], *pdx;

// x declarado como char
pcx = xc;
for (int i = 0; i<3; i++){
pcx = pcx + 1;
printf("O endereco de memoria declarado como char:%u\n", pcx);
}

// x declarado como int
pix = xi;
for (int j = 0; j<3; j++){
pix = pix + 1;
printf("O endereco de memoria declarado como int: %u\n", pix);
}

// x declarado como float
pfx = xf;
for(int k = 0; k<3; k++){
pfx = pfx + 1;
printf("O endereco de memoria declarado como float: %u\n", pfx);
}

// x declarado como double
pdx = xd;
for(int m = 0; m<3; m++){
pdx = pdx + 1;
printf("O endereco de memoria declarado como double: %u\n", pdx);
}
return 0;
}
