/**
* @file 2626.c
*
* Created on 2025-03-11 at 12:59:49
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
    char dodo[10], leo[10], pepper[10];

    const char *win_case[][2] = {
        {"pedra", "tesoura"},
        {"tesoura", "papel"},
        {"papel", "pedra"}
    };

    const char *m_dodo = "Os atributos dos monstros vao ser inteligencia, sabedoria...";
    const char *m_leo = "Iron Maiden's gonna get you, no matter how far!";
    const char *m_pepper = "Urano perdeu algo muito precioso...";
    const char *m_empate = "Putz vei, o Leo ta demorando muito pra jogar...";

    while (scanf("%s %s %s", dodo, leo, pepper) != EOF) {
        int wins_dodo = 0, wins_leo = 0, wins_pepper = 0;

        for (int i = 0; i < 3; i++) {
            if (strcmp(dodo, win_case[i][0]) == 0 && strcmp(leo, win_case[i][1]) == 0) wins_dodo++;
            if (strcmp(dodo, win_case[i][0]) == 0 && strcmp(pepper, win_case[i][1]) == 0) wins_dodo++;

            if (strcmp(leo, win_case[i][0]) == 0 && strcmp(dodo, win_case[i][1]) == 0) wins_leo++;
            if (strcmp(leo, win_case[i][0]) == 0 && strcmp(pepper, win_case[i][1]) == 0) wins_leo++;

            if (strcmp(pepper, win_case[i][0]) == 0 && strcmp(dodo, win_case[i][1]) == 0) wins_pepper++;
            if (strcmp(pepper, win_case[i][0]) == 0 && strcmp(leo, win_case[i][1]) == 0) wins_pepper++;
        }

        if (wins_dodo == 2) printf("%s\n", m_dodo);
        else if (wins_pepper == 2) printf("%s\n", m_pepper);
        else if (wins_leo == 2) printf("%s\n", m_leo);
        else printf("%s\n", m_empate);
    }

    return 0;
}
