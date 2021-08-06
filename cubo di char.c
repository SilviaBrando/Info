/*Scrivere un programma in C che
 legga un “cubo” di char
 conti il numero di occorrenze della lettera ‘a’
 conti il numero di caratteri maiuscoli inseriti
 dica quale carattere ha il maggior numero di occorrenze */

#include <stdio.h>
#define A 3
#define B 3
#define C 3
#define N 256

int conta_maiusc(char cubo[A][B][C]);
int occorrenze_a(char cubo[A][B][C]);
void occ_max(char cubo[A][B][C], int v[]);
int main(){
    char cubo[A][B][C], i_max;
    int i, j, k, a, maiusc, max=0, occorrenze[256]={0};

    printf("Inserire il cubo di caratteri: \n");
    for(i=0;i<A;i++){
        for(j=0;j<B;j++){
            for(k=0;k<C;k++){
                scanf(" %c", &cubo[i][j][k]);
            }
        }
    }

    a=occorrenze_a(cubo);
    printf("\nIl numero di occorrenze dalla lettera 'a' e' %d\n", a);

    maiusc=conta_maiusc(cubo);
    printf("\nIl numero di occorrenze di lettere maiuscole e' %d\n", maiusc);

    occ_max(cubo, occorrenze);

    for(i=0;i<256;i++){
        if(occorrenze[i]>max){
            max=occorrenze[i];
            i_max=i;
        }
    }
    printf("\nIl carattere con il maggior numero di occorrenze (%d) e' %c", max, i_max);

    return 0;
}

int occorrenze_a(char cubo[A][B][C]){
    int i, j, k, count=0;

    for(i=0;i<A;i++){
        for(j=0;j<B;j++){
            for(k=0;k<C;k++){
                if(cubo[i][j][k]=='a')
                    count++;
            }
        }
    }
    return count;
}

int conta_maiusc(char cubo[A][B][C]){
    int i, j, k, count=0;

    for(i=0;i<A;i++){
        for(j=0;j<B;j++){
            for(k=0;k<C;k++){
                if(cubo[i][j][k]<='Z' && cubo[i][j][k]>='A')
                    count++;
            }
        }
    }
    return count;
}

void occ_max(char cubo[A][B][C], int v[]){
    int i, j, k;

    for(i=0;i<A;i++){
        for(j=0;j<B;j++){
            for(k=0;k<C;k++){
                v[cubo[i][j][k]]++;
            }
        }
    }
}
