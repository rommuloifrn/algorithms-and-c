#ifndef SIMPLE_VECTOR_INT_H
#define SIMPLE_VECTOR_INT_H


void append_int(int a[], int *tamanho, int capacidade, int x, int *erro);

void print_vector(int a[], int tamanho);

int insert_int(int a[], int tamanho, int capacidade, int x, int index);

int find_int(int a[], int tamanho, int x);

int pop_int(int a[], int tamanho);

int remove_int(int a[], int tamanho, int index);

#endif