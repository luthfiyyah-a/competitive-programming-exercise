// solution for https://codeforces.com/problemset/problem/1425/A
// tags: games, greedy, 1400
// by luthfiyyah --- 22/09/2023


#include <cstdio>

int main() {

    unsigned long long t;
    scanf("%llu", &t);

    while(t--) {
        unsigned long long n;
        scanf("%llu", &n);

        // we make simulation
        unsigned long long turn = 1; // turn 1 for mr chanek. turn 2 for enemy
        unsigned long long addCoin, player1Coin=0;

        while(n>0) {

            /* if n is even and if we divide n by 2, the result is odd (except 4), then player will take half coins*/
            if(n%2==0 && (n%4==2 || n==4)) {
                n = n/2;
                addCoin = n;
            }
            else {
                n--;
                addCoin = 1;
            }

            if(turn == 1) {
                // if this mr Chanek's turn, then we calculate the coin
                player1Coin = player1Coin + addCoin;
            }

            turn = 1 - turn;
        }

        printf("%llu\n", player1Coin);
    }
}