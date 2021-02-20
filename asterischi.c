/* Asterischi

Si scriva un programma che stampi 3
asterischi (uno per riga) a
distanza di 700 millisecondi l'uno dall'altro. */

#include <stdio.h>
#include <time.h>

int main( void ){

  typedef struct timespec tempo;
  tempo milliSecondi;

  milliSecondi.tv_nsec = 700 * 1000 * 1000; // 700 millisecondi

  puts( "*" );
  nanosleep( &milliSecondi, NULL );
  puts( "*" );
  nanosleep( &milliSecondi, NULL );
  puts( "*" );
  nanosleep( &milliSecondi, NULL );

  return 0;
}
