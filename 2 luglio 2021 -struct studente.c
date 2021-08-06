/*Ammesso di avere opportunamente popolato l’array studenti. Si scriva una funzione in C che,
avendo in ingresso studenti (e non solo), salva in studentiOrdinato gli elementi di studenti
in ordine di media decrescente*/


#include <stdio.h>

typedef struct{
    char nome[15];
    int UID;
    int RisultatiEsami[25];
    float media;
    } studente;

int foo(studente studenti[], int size);
int MAX(studente studenti[], int size);
void media_decrescente(studente studenti[], studente studentiOrdinato[], int size);
int main(){
    studente studenti[50], studentiOrdinato[50]={0};
    int n, i;

    printf("Inserire in numero di studenti da analizzare: ");
    scanf("%d", &n);

    printf("Inserire la media dei %d studenti:\n", n);
    for(i=0;i<n;i++)
        scanf("%f", &studenti[i].media);

    media_decrescente(studenti, studentiOrdinato, n);

    printf("La media degli studenti ordinata in ordine decrescente e': \n");
    for(i=0;i<n;i++){
        printf(" %f ", studentiOrdinato[i].media);
    }

    return 0;
}

void media_decrescente(studente studenti[], studente studentiOrdinato[], int size){
    int i, max, nc=0, posix;

    for(i=0; i<size; i++){
        max= MAX(studenti,size);
        studentiOrdinato[nc].media = max ;
        nc++;
        posix = foo(studenti,size);
        studenti[posix].media=0;
    }
}

int MAX(studente studenti[], int size){
    int i, max=0;
    for(i=0; i<size; i++){
        if (studenti[i].media>max)
            max=studenti[i].media;
    }
    return max;
}

int foo(studente studenti[], int size){
    int max=0, i, posix=0;
    for(i=0; i<size; i++){
        if (studenti[i].media>max){
            max = studenti[i].media;
            posix = i;
        }
    }
    return posix;
}
