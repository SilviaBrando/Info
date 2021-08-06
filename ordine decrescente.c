#include <stdio.h>
#define N 50

int foo (int v[N], int n);
int MAX(int v[N], int n);
void media_decrescente(int v[N], int vOrdinato[N], int n);
int main(){
    int v[N], vOrdinato[N]={0}, i, n;

    printf("Quanto e' lungo il vettore? ");
    scanf("%d", &n);

    printf("Inserire i valori: \n");
    for(i=0;i<n;i++)
        scanf("%d", &v[i]);

    media_decrescente(v, vOrdinato, n);

    printf("Il vettore ordinato in ordine decrescente e': ");
    for(i=0;i<n;i++)
        printf(" %d ", vOrdinato[i]);

    return 0;
}

void media_decrescente(int v[N], int vOrdinato[N], int n){
    int i, a, nc=0, posix;

    for(i=0; i<n; i++){
        a = MAX(v, n);
        vOrdinato[nc] = a;
        nc++;
        posix = foo(v, n);
        v[posix]=0;
    }
}


int MAX(int v[N], int n){
    int i, max=0;
    for(i=0; i<n; i++){
        if (v[i]>max)
            max=v[i];
    }
    return max;
}

int foo (int v[N], int n){
    int max=0, i, posix=0;
    for(i=0; i<n; i++){
        if (v[i]>max){
            max = v[i];
            posix = i;
        }
    }
    return posix;
}
