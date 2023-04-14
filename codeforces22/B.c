#include <stdio.h>

int main() {
    long long int cases, n, total=0, underAverage=0, equalOrAboveAverage=0;
    double average;
    scanf("%lld", &cases);
    long long int marrai[cases];

    for (int i=0; i<cases; i++) {
        scanf("%lld", &n);
        marrai[i] = n;
        total += n;
    }
    // precisa mesmo que eu caste esta porqueira?
    average = (double) total/cases;
    for (int i=0; i<cases; i++) {
        if (marrai[i] < average) {
            underAverage++;

        }else{
            equalOrAboveAverage++;
        }
    }

    printf("%.1f\n", average);
    printf("%lld", underAverage);
    /* Even thought making one array for the above average and another for the equal or above,
    but anyway it would go through the main array 2 times (filling and printing) so does not make diff.
    */
    for (int i=0; i<cases; i++) {
        if(marrai[i]<average) {
            printf(" %lld", marrai[i]);
        }
    }
    printf("\n%lld", equalOrAboveAverage);
    for (int i=0; i<cases; i++) {
        if(marrai[i]>=average) {
            printf(" %lld", marrai[i]);
        }
    }
    printf("\n");

    return 0;
}