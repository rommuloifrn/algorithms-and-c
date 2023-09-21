#include <stdio.h>

int main() {
    int testCases;
    scanf("%d", &testCases);
    for (int i=0; i<testCases; i++) {
        long long time=0, bigRabbitPos, tinyRabbitPos, bigRabbitJump, tinyRabbitJump, jumpsSum, distance;
        scanf("%lld", &bigRabbitPos);
        scanf("%lld", &tinyRabbitPos);
        scanf("%lld", &bigRabbitJump);
        scanf("%lld", &tinyRabbitJump);

        distance = tinyRabbitPos - bigRabbitPos;
        jumpsSum = (tinyRabbitJump + bigRabbitJump);
        time = distance / jumpsSum;
        
        if (distance%jumpsSum==0) printf("%lld\n", time);
        else printf("-1\n");
        
    }

    return 0;
}