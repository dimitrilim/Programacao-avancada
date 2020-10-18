// Boehm garbage collector
// Nao foi possivel fazer testes pois ao instalar em um sistema linux nativo, o coletor dava um erro na instalacao via terminal e pedia a
// instalacao da biblioteca libatomic_ops.
// Ao executar o programa da erro, o header gc.h nao tem nenhuma informacao assim nao dando referencia para as funcoes de alocacao no laco for


#include <gc.h>
#include <assert.h>
#include <stdio.h>

int main()
{
  int i;


  for (i = 0; i < 10000000; ++i)
   {
     int **p = (int **) GC_MALLOC(sizeof(int *));
     int *q = (int *) GC_MALLOC_ATOMIC(sizeof(int));
     assert(*p == 0);
     *p = (int *) GC_REALLOC(q, 2 * sizeof(int));
     if (i % 100000 == 0)
       printf("Tamanho do Stack = %u\n", GC_get_heap_size());
   }
  return 0;
}
