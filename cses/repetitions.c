#include <stdio.h>

int main() {
    int longest=0, reps=1;
    char actual, before;
    scanf("%c", &before);

    while (scanf("%c", &actual)!= EOF) {
        if (actual == before) reps++; else reps = 1;
        if (reps > longest) longest = reps;
        before = actual;
    }

    printf("%d\n", longest);
    return 0;
}