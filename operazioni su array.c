/*–Scrivere un programma in C che
•legga due array di interi da tastiera (dim max = 10)
•dica quale dei due array ha valor medio più alto
•calcoli l'array concatenato tra i due array in ingresso
•trovi tutti i numeri primi inseriti
•trovi il massimo ed il minimo tra tutti i valori inseriti
•dica in quale dei due array sono presenti i due valori di max e min
•calcoli l'array riversato*/

#include <stdio.h>
#define N 10

int Primo(int n);
int main(){
    int v1[N], v2[N], v3[N], v4[N], l1, l2, i, j=0, somma1, somma2, media1, media2;

    //inserimento array
    printf("Quanti valori contiene il primo vettore?  ");
    scanf("%d", &l1);

    printf("Quanti valori contiene il secondo vettore?  ");
    scanf("%d", &l2);

    printf("Inserire i valori del primo vettore\n");
    for(i=0;i<l1;i++){
        scanf("%d", &v1[i]);
    }

    printf("Inserire i valori del secondo vettore\n");
    for(i=0;i<l2;i++){
        scanf("%d", &v2[i]);
    }

    //calcolo media maggiore
    for(i=0;i<l1;i++){
        somma1+=v1[i];
    }
    media1=somma1/l1;

    for(i=0;i<l2;i++){
        somma2+=v2[i];
    }
    media2=somma2/l2;

    if(media1<media2)
        printf("\nIl secondo vettore ha la media piu' alta del primo\n");
    else
        printf("\nIl primo vettore ha la media piu' alta del secondo\n");

    //popolo v3, concatenando v1 e v2
    for(i=0;i<l1;i++)
        v3[i]=v1[i];
    for(i=0;i<l2;i++)
        v3[i+l1]=v2[i];

    printf("\nIl vettore concatenato e': \n");
    for(i=0;i<l1+l2;i++){
        printf(" %d ", v3[i]);
    }

    //trovare numeri primi
    for(i=0;i<l1+l2;i++){
        if(Primo(v3[i])){
            v4[j]=v3[i];
            j++;
        }
    }
    printf("\nI numeri primi inseriti sono: \n");
    for(i=0;i<j;i++)
        printf(" %d ", v4[i]);

    //massimo e minimo
    int max=0, i_max;
    for(i=0;i<l1+l2;i++){
        if(v3[i]>max){
            max=v3[i];
            i_max=i;
        }
    }
    printf("\nIl numero massimo inserito e' %d ", max);
    if(i_max<l1)
        printf("ed e' presente nel primo vettore");
    else
        printf("ed e' presente nel secondo vettore");

    int min=max, i_min;
    for(i=0;i<l1+l2;i++){
        if(v3[i]<min){
            min=v3[i];
            i_min=i;
        }
    }
    printf("\nIl numero minimo inserito e' %d ", min);
    if(i_min<l1)
        printf("ed e' presente nel primo vettore");
    else
        printf("ed e' presente nel secondo vettore");

    //vettore riversato
    printf("\nIl vettore riversato e': \n");
    for(i=l1+l2-1;i>=0;i--)
        printf("  %d  ", v3[i]);

    return 0;
}


int Primo(int n){
    int i;
    for(i=2;i<n/2+1;i++){
        if(n%i==0)
            return 0;
    }
    return 1;
}
