/*Dato l’esercizio 1, si scriva in C la funzione che, data la variabile giocate (e
basta?), restituisce alla funzione chiamante le posizioni in cui si trovano gli ‘1’, le
‘X’ ed i ‘2’.
Ad esempio:
giocate: [‘1’, ‘1’, ‘1’, ‘1’, ‘X’, ‘1’, ‘1’, ‘1’, ‘1’, ‘1’, ‘1’, ‘X’, ‘2’]
1: 0, 1, 3, 5, 6, 7, 8, 9, 10
X: 4, 11
2: 12*/

#define NUMSEGNI 13
#define NUMGIOCATE 3
#define ANNOCERCATO 2010

typedef struct {
int giorno;
int mese;
int anno;
} TipoData;

typedef struct {
TipoData data;
char segno[NUMSEGNI];
} partite;

void pos(partite giocate[], int v1[], int v2[], int vx[], int numgiocata);
int trova1(partite giocate[]);
void popola(partite giocate[]);
int main(){
    partite giocate[NUMGIOCATE];
    int i, j, n, a, v1[NUMSEGNI], v2[NUMSEGNI], vx[NUMSEGNI];

    popola(giocate);

    a=trova1(giocate);

    printf("\nSeleziona numero giocata da controllare: ");
    scanf("%d", &n);

    printf("Il numero di 1 che sono stati giocati e' %d", a);

    pos(giocate, v1, v2, vx, n);

    return 0;
}


void popola(partite giocate[]){
    int i, j;

    for(i=0;i<NUMGIOCATE;i++){
        printf("Inserisci la data della giocata: \n");
        scanf("%d %d %d", &giocate[i].data.giorno, &giocate[i].data.mese, &giocate[i].data.anno);
        printf("Inserisci i segni delle giocate: \n");
        for(j=0;j<NUMSEGNI;j++){
            do{
                scanf(" %c", &giocate[i].segno[j]);
            }while(giocate[i].segno[j]!='1' && giocate[i].segno[j]!='2' && giocate[i].segno[j]!='x');
        }
    }
}

int trova1(partite giocate[]){
    int i, j, count=0;

    for(i=0;i<NUMGIOCATE;i++){
        for(j=0;j<NUMSEGNI;j++){
            if(giocate[i].segno[j]=='1')
                count++;
        }
    }
    return count;
}

void pos(partite giocate[], int v1[], int v2[], int vx[], int numgiocata){
    int i, j, k=0, y=0, w=0;

    for(j=0;j<NUMSEGNI;j++){
        if(giocate[numgiocata].segno[j]=='1'){
            v1[k]=j;
            k++;
        }
        if(giocate[numgiocata].segno[j]=='2'){
            v2[y]=j;
            y++;
        }
        if(giocate[numgiocata].segno[j]=='x'){
            vx[w]=j;
            w++;
        }
    }

    printf("\n1: ");
    for(i=0;i<k;i++)
        printf(" %d ", v1[i]);

    printf("\n2: ");
    for(i=0;i<y;i++)
        printf(" %d ", v2[i]);

        printf("\nx: ");
    for(i=0;i<w;i++)
        printf(" %d ", vx[i]);
}
