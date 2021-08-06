/*dato un array, stampalo dritto e poi al contrario*/

#include <stdio.h>
#define N 100
int main(){
    int v[N], i, n;

    printf("Inserire lunghezza vettore: \n");
    scanf("%d", &n);

    printf("\nInserire il vettore:\n");
    for(i=0;i<n;i++){
        scanf("%d", &v[i]);
    }


    printf("\nIl vettore inserito, stampato dritto, e' \n");
    for(i=0;i<n;i++){
        printf("%d", v[i]);
    }

    printf("\nIl vettore inserito, stampato al contrario, e' \n");
    for(i=n;i>0;i--){
        printf("%d", v[i-1]);
    }
    return 0;

}
