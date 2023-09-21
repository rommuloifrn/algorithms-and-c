#include <stdio.h>

int main() {
    long long actualRepetition=1, max=1;
    char actual, prev=-1;

    while (scanf("%c", &actual) != EOF) {
        if (actual == prev) actualRepetition++;
        else actualRepetition = 1;
        if (actualRepetition>max) max=actualRepetition;
        prev = actual;
    }

    printf("%lld\n", max);

    return 0;
}