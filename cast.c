/* Cast
Si scriva un programma C che
chieda all'utente di inserire un valore
in virgola mobile (double), lo converta in intero
e quindi stampi entrambi i valori. */

#include <stdio.h>

int main( ){

  double doubleNumber;
  int intNumber;

  printf( "Please insert a floating point number \n? " );
  scanf( "%lf", &doubleNumber );

  intNumber = ( int )doubleNumber;

  printf( "Your floating point number is : %f\n", doubleNumber );
  printf( "After casting to int : %d\n", intNumber );

  return 0;
}
