//Dato il seguente frammento di codice:
#include <stdio.h>

int main(){
  int i;

  for (i=1; i>0; i++)
    printf("Loop: %d\n", i);

  printf("Terminato");
  return 0;
}
//Spiegare cosa succede e perché.

/*il ciclo for parte da 1 e finisce nel momento in cui il numero è minore di zero. I numeri sono rappresentazioni in 32 bit.
Il numero 0, ad esempio, è rappresentato da 32 zeri. Il ciclo for conclude nel momento in cui il bit più significativo
passa da essere 0 ad essere 1: per la codifica in complemento a 2 (CP2), infatti, quando il bit più significativo
(cioè il 32esimo) è 0 rappresenta un numero positivo, quando è 1 rappresenta un numero negativo (cioè rappresenta il numero
indicato dagli altri 31 bit precedenti, con il segno - davanti). Questo passaggio accade quando la codifica binaria del numero
necessita più di 31 bit per essere rappresentato. */

