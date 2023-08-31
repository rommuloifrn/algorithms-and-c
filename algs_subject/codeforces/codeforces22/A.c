#include <stdio.h>
    
int main() {
    long long int cases, n, total=0, underAverage=0, equalOrAboveAverage=0;
    double average;
    scanf("%lld", &cases);
    int marrai[cases];
    
    for (int i=0; i<cases; i++) {
        scanf("%lld", &n);
        marrai[i] = n;
        total += n;
    }
    // precisa mesmo que eu caste esta porqueira?
    average = (double) total/cases;
    for (int i=0; i<cases; i++) {
        if (marrai[i] < average) underAverage++; else equalOrAboveAverage++;
    }
    
    printf("%.1f\n", average);
    printf("%lld\n", underAverage);
    printf("%lld\n", equalOrAboveAverage);
    
    return 0;
}