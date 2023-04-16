#include <stdio.h>

int main() {
    while (1) {
        int samples, peaks=0;
        int wave[samples];
        scanf("%d", &samples);
        if (samples == 0) return 0;

        for (int i=0; i<samples; i++) {
            scanf("%d", &wave[i]);    
        }
            
        // 1 = up, 0 = down
        int direction = 2;
        for (int i=0; i<samples-1; i++) {
            if (direction == 1 && wave[i+1]<wave[i]) peaks++; else
            if (direction == 0 && wave[i+1]>wave[i]) peaks++;

            if (wave[i+1]> wave[i]) direction = 1;
            else if (wave[i+1]<wave[i]) direction = 0;
        } 

        printf("%d", peaks);

        

        
    }
}