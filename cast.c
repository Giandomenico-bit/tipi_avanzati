/* Cast
Si scriva un programma C che
chieda all'utente di inserire un valore
in virgola mobile (double), lo converta in intero
e quindi stampi entrambi i valori. */

#include <stdio.h>

int main( void ){

  float floatNumber;
  int   intNumber;

  printf( "Please insert a floating point number \n? " );
  scanf( "%f", &floatNumber );

  intNumber = ( int )floatNumber;

  printf( "Your floating point number is : %f\n", floatNumber );
  printf( "After casting to int : %d\n", intNumber );

  return 0;
}
