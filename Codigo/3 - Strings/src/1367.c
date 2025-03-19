/**
* @file 1367.c
*
* Created on 2025-03-19 at 13:49:26
* @author GabrielCampelo
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

#define min(a, b) ((a) < (b) ? (a) : (b))
#define max(a, b) ((a) > (b) ? (a) : (b))

#define INF 0x3f3f3f3f
#define LINF 0x3f3f3f3f3f3f3f3fLL

typedef long long ll;
typedef unsigned long long ull;

int penalty[26];

int main() {
    int n;
    
    while (scanf("%d", &n) && n != 0) {
        for (int i = 0; i < 26; i++) penalty[i] = 0;
        
        char c;
        int tempo, s = 0, p = 0;
        char julgamento[20];
        
        while (n--) {
            scanf(" %c %d %s", &c, &tempo, julgamento);
            
            if (strcmp(julgamento, "correct") == 0) {
                s++;
                p += penalty[c - 'A'] + tempo;
            } else {
                penalty[c - 'A'] += 20;
            }
        }
        
        printf("%d %d\n", s, p);
    }
    
    return 0;
}