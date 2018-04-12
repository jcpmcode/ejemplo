#include <stdio.h>
#include <string.h>

int main (void)
{
  char nombre[50] = "Jose Carlos";
  int tam, i=0;


  printf("%s\n", nombre);
  tam = strlen(nombre);
  for (i = tam-1; i>=0; i--)
  {
    printf("%c", nombre[i]);
  }
  printf("\n");
  printf("HOlanverkndknlnflnedbcbdjcbjbjcbjcbojsz\n");
  printf("Nuevos camvios\n");
}
