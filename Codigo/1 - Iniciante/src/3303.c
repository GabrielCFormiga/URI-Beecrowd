/**
* @file 3303.c
*
* Created on 2025-03-11 at 20:57:06
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

int main() {
    char s[21] = {0};
    scanf("%s", s);
    printf("%s\n", s[9] != '\0' ? "palavrao" : "palavrinha");
    return 0;
}