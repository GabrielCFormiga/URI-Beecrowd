/**
* @file 1568.c
*
* Created on 2024-08-20 at 01:01:04
* @author GabrielCampelo
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

#define INF 0x3f3f3f3f
#define LINF 0x3f3f3f3f3f3f3f3fLL

typedef long long ll;
typedef unsigned long long ull;

#define limit 30000001

int is_prime[limit + 1]; // 0 == true
int primes[limit]; // array que guarda os primos em sequência

int main() {
    // Crivo
    is_prime[0] = is_prime[1] = 1; // 1 == false
    
    for (int i = 2; i * i <= limit; i++) {
        if (is_prime[i] == 0) {
            for (int j = i * i; j <= limit; j+= i) {
                is_prime[j] = 1;
            }
        }
    }

    // Array de primos
    int len = 0;
    for (int i = 3; i < limit + 1; i++) {
        if (is_prime[i] == 0) {
            primes[len] = i;
            len++;
        }
    }

    ll n;
    while (scanf("%lld", &n) != EOF) {
        ll res = 1, count;
        while (n % 2 == 0) n /= 2;

        ll j = 0;
        for (ll i = primes[j]; i * i <= n; res *= count + 1, j++) {
            if (j == len) break;
            i = primes[j];
            for (count = 0; n % i == 0; n /= i, count++);
        }

        printf("%lld\n", n == 1 ? res : res * 2);
    }

    return 0;
}