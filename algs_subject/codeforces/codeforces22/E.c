#include <stdio.h>

int main() {
    while (1) {
        int samples, peaks=0;
        scanf("%d", &samples);
        int wave[samples];
        if (samples == 0) return 0;

        for (int i=0; i<samples; i++) {
            scanf("%d", &wave[i]);    
        }
        /*
        // 1 = up, 0 = down
        int direction = 2;
        for (int i=0; i<samples; i++) {
            printf("i = %d\n", i);
            // caso chegue no último elemento
            if (i==samples-1) {
                if (direction == 1 && wave[0]<wave[i]) peaks++; else
                if (direction == 0 && wave[0]>wave[i]) peaks++;
            }
            if (direction == 1 && wave[i+1]<wave[i]) peaks++; else
            if (direction == 0 && wave[i+1]>wave[i]) peaks++;
            

            if (wave[i+1]> wave[i]) direction = 1;
            else if (wave[i+1]<wave[i]) direction = 0;
        } 
        */
        int next, previous;
        for (int i=0; i<samples; i++) {
            if (i==samples-1) next = 0; else next = i+1;
            if (i==0) previous = samples-1; else previous = i-1;

            if (wave[i]<wave[previous])
                if(wave[i]<wave[next]) peaks++;
            if (wave[i]>wave[previous])
                if(wave[i]>wave[next]) peaks++;
        } 

        printf("%d\n", peaks);

        

        
    }
}