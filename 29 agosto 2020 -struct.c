/*Si definiscano in C due strutture dati che permettano, una di rappresentare un punto in un piano cartesiano e
l’altra una linea spezzata formata da N punti. Si scriva quindi in C una funzione che ricevuta in ingresso una linea
spezzata, ne calcoli la lunghezza.
Si ricorda che la distanza tra due punti si misura lungo la retta passante per i due punti; se si è su un piano cartesiano
con coordinate dei due punti P0 (x0, y0) e P1 (x1, y1) basta applicare il teorema di Pitagora.*/

#include <stdio.h>
#include <math.h>
#define N 100

typedef struct punto{
    int x;
    int y;
}punto;

typedef struct linea{
    punto punti[N];
}linea;

float lunghezza(linea l, int npunti);
int main(){
    int n, i;
    float l;
    punto punti[N];
    linea s;

    printf("Quanti punti vuoi inserire?: ");
    scanf("%d", &n);


    for(i=0;i<n;i++){
        printf("Inserire le coordinate del %d punto: \n", i);
        scanf("%d %d", &s.punti[i].x, &s.punti[i].y);
    }

    l=lunghezza(s, n);

    printf("La lunghezza della linea e' %f", l);

    return 0;
}


float lunghezza(linea l, int npunti){
    int i, j=0;
    float lung=0;

    for(i=0;i<npunti;i++){
        j=(i+1)%npunti;
        lung += (sqrt ((l.punti[i].x - l.punti[j].x)*(l.punti[i].x - l.punti[j].x) +
                          (l.punti[i].y - l.punti[j].y)*(l.punti[i].y - l.punti[j].y)))/2;
    }

    //printf("La lunghezza della linea e': %f", lung);
    return lung;
}
