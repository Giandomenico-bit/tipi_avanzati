/* Asterischi

Si scriva un programma che stampi 3
asterischi (uno per riga) a
distanza di 700 millisecondi l'uno dall'altro. */

#include <stdio.h>
#include <time.h>

int main( void ){

  typedef struct timespec time_s;
  time_s millis;

  printf( "*\n" );
  millis.tv_sec = 700 * 1000;
  printf( "*\n" );
  millis.tv_sec = 700 * 1000;
  printf( "*\n" );
  millis.tv_sec = 700 * 1000;

  return 0;
}
