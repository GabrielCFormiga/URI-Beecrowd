/**
* @file 1448.c
*
* Created on 2025-03-18 at 13:57:53
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

#define MAX_LEN 110

int main() {
    int tt;
    scanf("%d%*c", &tt);
    
    for (int t = 1; t <= tt; t++) {
        printf("Instancia %d\n", t);
                
        char ans[MAX_LEN], t1[MAX_LEN], t2[MAX_LEN];
        
        fgets(ans, MAX_LEN, stdin);
        fgets(t1, MAX_LEN, stdin);
        fgets(t2, MAX_LEN, stdin);
        
        int cnt1 = 0, cnt2 = 0;
        int desempate = 0;
        
        for (int i = 0; ans[i] != '\0'; i++) {
            if (desempate == 0 && t1[i] != t2[i]) {
                if (t1[i] == ans[i]) desempate = 1; 
                if (t2[i] == ans[i]) desempate = 2;
            }
            
            if (ans[i] == t1[i]) cnt1++;
            if (ans[i] == t2[i]) cnt2++;
        }
        
        if (cnt1 > cnt2) desempate = 1;
        else if (cnt2 > cnt1) desempate = 2;
        
        if (desempate == 0) {
            printf("empate\n\n");
        } else {
            printf("time %d\n\n", desempate);
        }
    }
    
    return 0;
}