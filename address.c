/* Address

Si scriva un programma C che stampi
il valore dell'indirizzo di una variabile
float dopo averlo memorizzato in un puntatore. */

#include <stdio.h>

int main( ){

  float* floatPtr;
  float number;

  floatPtr = &number;

  printf( "Valore puntatore . %p\n", floatPtr );
  
  return 0;
}
