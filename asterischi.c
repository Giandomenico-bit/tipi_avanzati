/* Asterischi

Si scriva un programma che stampi 3
asterischi (uno per riga) a
distanza di 700 millisecondi l'uno dall'altro. */

#include <stdio.h>
#include <time.h>

int main( void ){

  typedef struct timespec time_s;
  time_s millis;

  millis.tv_nsec = 700 * 1000 * 1000; // 700 millisecondi

  puts( "*" );
  nanosleep( &millis, NULL );
  puts( "*" );
  nanosleep( &millis, NULL );
  puts( "*" );
  nanosleep( &millis, NULL );

  return 0;
}
