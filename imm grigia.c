
#include <stdio.h>

void makeWhite(char immagine[][256]);
void makeBlack(char immagine[][256]);

int main(){
    char imm[256][256];
    makeWhite(imm);
    makeBlack(imm);
    return 0;
}

void makeWhite(char immagine[][256]){
    int i,j;
    for(i=0; i<256; i++)
        for(j=0; j<256; j++)
            immagine[i][j] = 255;
}

void makeBlack(char immagine[][256]){
    int i,j;
    for(i=0; i<256; i++)
        for(j=0; j<256; j++)
            immagine[i][j] = 0;
}
