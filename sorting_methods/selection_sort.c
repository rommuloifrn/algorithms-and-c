#include <stdio.h>

listPrint(int list, int size) {
    printf("[ ");
    for (int i=0; i<size, i++)
        printf("%d, ", list[i])
    printf("")
}

selSort(int list, int size) {
    
}

int main() {
    int listSize; scanf("%d", &listSize);
    int list[listSize];
    for (int i=0; i<listSize; i++)
        scanf("%d", &list[i]);

    



    return 0;
}