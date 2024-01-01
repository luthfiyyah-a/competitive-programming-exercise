#include <stdio.h>
#include <math.h>

int main() {
    int i, j;
    int input;

    for(i=0; i<5; i++){
        for(j=0; j<5; j++) {
            scanf("%d", &input);
            if(input == 1) {
                printf("%d\n", abs(i-2)+abs(j-2));
            }
        }
    }
}