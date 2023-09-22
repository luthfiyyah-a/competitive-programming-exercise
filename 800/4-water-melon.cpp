// solution for https://codeforces.com/problemset/problem/4/A
// tags: bruteforces, math, 800
// by luthfiyyah --- 20/09/2023


#include <stdio.h>


int main() {
    int w;
    scanf("%d", &w);
    if(w%2==0 && w!=2) {
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }
}