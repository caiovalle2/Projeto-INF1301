#include <stdlib.h>
#include <stdio.h>
#include "lista.h"

struct no {
    void *info;
    struct no *prox;
    struct no *ant;
};

struct lista {
    int tam;
    No *ini;
    No *fin;
    No *corr;
};

Lista* lst_cria(void){
    Lista* l= (Lista*)malloc(sizeof(Lista));
    l->tam = 0;
    l->ini = NULL;
    l->fin = NULL;
    return l;
}

int lst_vazia(Lista* lst){

}

void lst_insIni(Lista* lst, void* valor){

}

void lst_insFin(Lista* lst, void* valor){

}

void *lst_retIni(Lista* lst){

}

void *lst_retFin(Lista* lst){

}

void lst_posIni(Lista* lst){

}

void lst_posFin(Lista* lst){

}

void *lst_prox(Lista* lst){

}

void *lst_ant(Lista* lst){

}

void lst_libera(Lista* lst){
    
}