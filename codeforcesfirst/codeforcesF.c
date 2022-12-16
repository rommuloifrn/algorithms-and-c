#include <stdio.h>
int main() {
    int long long x, mpm;
    
    scanf("%lld", &x);
    mpm = x;

    while (1==1) {
        mpm++;
        if (mpm % 2 == 0) {
            break;
        }
    }

    printf("%lld\n", mpm);

}