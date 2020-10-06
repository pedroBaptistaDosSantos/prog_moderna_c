#include <stdio.h>

int main(void){
  char c;
  printf("O tamanho de c (char)  é: %lu bites / %lu bytes \n", sizeof c, sizeof c*8);
  
  c = 10;
  printf("valor do C:  %i \n", c);
  return 0;

}
