/**
* @file 1287.c
*
* Created on 2025-03-19 at 14:10:12
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

const ll MAX_INT = 2147483647;
#define MAX_LEN 55

int main() {
    char str[MAX_LEN];
    char ans[MAX_LEN];

    while (fgets(str, MAX_LEN, stdin) != NULL) {
        int ans_len = 0;
        for (int i = 0; i < MAX_LEN; i++) ans[i] = 0;
        bool error = 0;

        for (int i = 0; str[i] != '\n'; i++) {
            if (str[i] >= '0' && str[i] <= '9') ans[ans_len++] = str[i];
            else if (str[i] == 'O' || str[i] == 'o') ans[ans_len++] = '0';
            else if (str[i] == 'l') ans[ans_len++] = '1';
            else if (!(str[i] == ' '|| str[i] == ',')) {
                error = 1;
                break;
            }
        }
        
        if (ans_len == 0 || error) {
            printf("error\n");
            continue;
        }

        ll fat = 1;
        ll num = 0;
        for (int i = ans_len - 1; i >= 0; i--) {
            num += fat * (ans[i] - '0');
            fat *= 10;
            if (num > MAX_INT) break;
        }

        if (num > MAX_INT) printf("error\n");
        else printf("%lld\n", num);
    }
    
    return 0;
}