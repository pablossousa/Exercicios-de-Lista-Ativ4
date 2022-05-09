#include "lista.h"

int main(){

    Lista l;
    Item aux;

    FLVazia(&l);

    int cont = 0;

    for (cont = 0; cont < MAXTAM; cont++) {
        printf("Informe um número o valor %d: ", cont+1);
        scanf("%d", &aux.val);
        LInsert(&l, aux);
    }

    LImprime(&l);

    Verifica(&l);

    return 0;

}

