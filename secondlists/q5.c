#include <stdio.h>
#include <stdlib.h>

struct array_list{
    int *data;
    unsigned int size;
    unsigned int capacity;
};

void array_list_increase_capacity(struct array_list *list){
    struct array_list* new_list;
    // eu estava mexendo nos dados de um ponteiro somente declarado. Não estava apontando pra lugar nenhum! aí é de lascar a vida do homem.
    // hahahaha ponteiros de ponteiros de ponteiros
    new_list = (struct array_list*)malloc(sizeof(struct array_list));
    new_list->data = (int*)malloc(sizeof(int)*list->size+10);
    if (new_list == 0) {
        fprintf(stderr,"Error on memory allocation.\n");
        exit(-1);
    }
    for(int i=0; i<list->capacity; i++) {
        new_list[i] = list[i];
    }
    list = new_list;
    list->capacity = list->capacity+10;
    
}   

struct array_list * array_list_create(){
    struct array_list *new_list;
    new_list = (struct array_list*)malloc(sizeof(struct array_list));
    if (new_list==0){ /* Error */
    fprintf(stderr,"Error on memory allocation.\n");
    exit(-1);
    }
    new_list->capacity = 10;
    new_list->size = 0;
    new_list->data = (int*)malloc(sizeof(int)*new_list->capacity);
    if (new_list->data==0){ /* Error */
    fprintf(stderr,"Error on memory allocation.\n");
    exit(-1);
    }
    return new_list;
}

void array_list_read_until(struct array_list *list, int end_reading){
    int x;
    while (scanf("%d",&x),x!=end_reading){
    if (list->size==list->capacity)
    array_list_increase_capacity(list);
    list->data[list->size++] = x;
    }
}

void array_list_print(struct array_list *list){
    printf("[");
    if (list->size>0){
    printf("%d",list->data[0]);
    for (int i=1 ; i<list->size ; ++i)
    printf(", %d",list->data[i]);
    }
    printf("]");
}

int main(){
    struct array_list *list01 = array_list_create();
    array_list_read_until(list01,-1);
    array_list_print(list01);
    array_list_increase_capacity(list01);
    array_list_print(list01);
    array_list_read_until(list01,-1);

    printf("\n");
    free(list01->data);
    free(list01);

    return 0;
}