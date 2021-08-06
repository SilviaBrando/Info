/*Un numero si dice di ROVERI se è
 * positivo, primo, maggiore di 11 e pari,
 * si scriva una funzione che restituisce al chiamante (NON STAMPA A VIDEO)
 * tutti i numeri ROVERI tra 0 e 1512
*/

#include <stdio.h>
#define MAX 1512

int Primo(int N);
int roveri(int v[]);
int main(){
    int v[MAX], i, a;

    a=roveri(v);

    for(i=0;i<a;i++){
        printf("  %d  ", v[i]);
    }

    return 0;
}

int roveri(int v[]){
    int i, j=0;
    for(i=12;i<=1512;i+=2){
        if(Primo(i)){
            v[j]=i;
            j++;
        }
    }
    return j;
}

int Primo(int N){
    int i;
    for(i=2;i<N/2+1;i++){
        if(N%i==0)
            return 0;
    }
    return 1;
}
