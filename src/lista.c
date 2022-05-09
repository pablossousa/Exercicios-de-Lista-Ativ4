#include "lista.h"

void FLVazia(Lista *l){
    l->first = 0;
    l->last  = 0;
}

void LInsert(Lista *l, Item d){
    if (l->last >= MAXTAM){
        printf("LISTA CHEIA!\n");
    }else{
        l->vet[l->last] = d;
        l->last ++;
    }
}

void LImprime(Lista *l){
    for(int i=l->first; i<l->last; i++)
        printf("%d\t", l->vet[i].val);
    printf("\n");
}

void Verifica(Lista *l) {
    int maxSum = -2147483648, cont = 0, soma = 0;
    int vet[l->last];

    for (int i = l->first; i < l->last; i++) {
        for (int j = i; j < l->last; j++) {
            soma += l->vet[j].val;
            if (soma > maxSum) {
                maxSum = soma;
                vet[cont] = maxSum;
            }
        }
        soma = 0;
        maxSum = -2147483648;
        cont++;
    }

    for (int i = l->first; i < l->last; i++) {
        if (vet[i]>maxSum) {
            maxSum = vet[i];
        }
    }

    printf("\nA máxima soma é %d\n", maxSum);


}
