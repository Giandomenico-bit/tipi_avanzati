/* Address

Si scriva un programma C che stampi
il valore dell'indirizzo di una variabile
float dopo averlo memorizzato in un puntatore. */

#include <stdio.h>

int main( void ){

  float* floatPunt;
  float valore;

  floatPunt = &valore;
  printf( "Valore puntatore : %p\n", floatPunt );

  return 0;
}
