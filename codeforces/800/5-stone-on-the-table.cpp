// solution for https://codeforces.com/problemset/problem/266/A
// tags: implementation, 800
// by luthfiyyah --- 20/09/2023

#include <stdio.h>


int main() {
    int n;
    char str[51];
    int result = 0;
    scanf("%d", &n);
    scanf("%s", str);
    for(int i=0; i<n; i++){
        if(str[i] == str[i+1]) {
            result++;
        }
    }
    printf("%d", result);
}
