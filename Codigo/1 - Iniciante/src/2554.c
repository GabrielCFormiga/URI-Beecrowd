/**
* @file 2554.c
*
* Created on 2025-03-10 at 21:22:40
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

int main() {
    int n, d, cnt, aux;
    char data[15];
    
    while (scanf("%d %d", &n, &d) != EOF) {
        char ans[15] = "";

        while (d--) {
            scanf("%*c%s", data);

            cnt = 0;

            for (int i = 0; i < n; i++) {
                scanf("%d", &aux);
                cnt += aux;
            }

            if (cnt == n && ans[0] == '\0') strcpy(ans, data);
        }

        printf("%s\n", (ans[0] != '\0' ?  ans : "Pizza antes de FdI"));
    }

    return 0;
}