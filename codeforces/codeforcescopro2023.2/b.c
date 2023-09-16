#include <stdio.h>

int main() {
    int testCases;
    scanf("%d", &testCases);
    for (int i=0; i<testCases; i++) {
        long long time=0, bigRabbitPos, tinyRabbitPos, bigRabbitJump, tinyRabbitJump;
        scanf("%lld", &bigRabbitPos);
        scanf("%lld", &tinyRabbitPos);
        scanf("%lld", &bigRabbitJump);
        scanf("%lld", &tinyRabbitJump);
        if (bigRabbitPos >= tinyRabbitPos)
        
        while ( !(bigRabbitPos >= tinyRabbitPos) ) {
            bigRabbitPos += bigRabbitJump;
            tinyRabbitPos -= tinyRabbitJump;
            time++;
        }
        if (bigRabbitPos == tinyRabbitPos) printf("%lld\n", time);
        else printf("-1\n");
        
    }

    return 0;
}