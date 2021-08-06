//Dato il seguente frammento di codice:
#include <stdio.h>

int main(){
  int i;

  for (i=1; i>0; i++)
    printf("Loop: %d\n", i);

  printf("Terminato");
  return 0;
}
//Spiegare cosa succede e perch�.

/*il ciclo for parte da 1 e finisce nel momento in cui il numero � minore di zero. I numeri sono rappresentazioni in 32 bit.
Il numero 0, ad esempio, � rappresentato da 32 zeri. Il ciclo for conclude nel momento in cui il bit pi� significativo
passa da essere 0 ad essere 1: per la codifica in complemento a 2 (CP2), infatti, quando il bit pi� significativo
(cio� il 32esimo) � 0 rappresenta un numero positivo, quando � 1 rappresenta un numero negativo (cio� rappresenta il numero
indicato dagli altri 31 bit precedenti, con il segno - davanti). Questo passaggio accade quando la codifica binaria del numero
necessita pi� di 31 bit per essere rappresentato. */

