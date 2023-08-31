#include <stdio.h>

typedef struct string {
    int length;
    char word[];
} string;

void sread(string x) {

}

typedef struct card {
    char name[30];
    int namelength;
    int atk;
    int spd;
    int hp;
} card;

void println() {
    printf("\n---------------------------------------\n");
}

void names(struct card x) {
    int i;
    for(i=0; i<30; i++) {
        scanf("%c", &x.name[i]);
        if (x.name[i] == '0') break;
    }
    x.namelength = i;
}

void gname (card x) {
    for (int i=0; i<x.namelength; i++) {
        printf("%c", x.name[i]);
    }
}

void sgname (card x) {
    for (int i=0; i<x.namelength; i++) {
        printf("%d", x.name[i]);
    } println();
}





int main() {
    card aurevoir;
    names(aurevoir);
    println();
    sgname(aurevoir);

    return 0;
}