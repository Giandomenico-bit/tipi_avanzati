/* Cast
Si scriva un programma C che
chieda all'utente di inserire un valore
in virgola mobile (double), lo converta in intero
e quindi stampi entrambi i valori. */

#include <stdio.h>

int main( void ) {

  double numero1;
  int numero2;

  printf( "%s", "Inserisci numero ( virgola mobile ) : " );
  scanf( "%lf", &numero1 );

  numero2 = ( int )numero1;

  printf( "Numero in virgola mobile : %.3f\n", numero1 );
  printf( "Dopo il cast %d\n", numero2 );

  return 0;
}
