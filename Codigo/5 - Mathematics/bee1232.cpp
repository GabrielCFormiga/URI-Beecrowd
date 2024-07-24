#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int cube[49];
int original_cube[49];

void front() {
    int aux;
    // 'front'(17,19,24,22)(18,21,23,20)( 6,25,43,16)( 7,28,42,13)( 8,30,41,11)
    aux = cube[22];
    cube[22] = cube[24];
    cube[24] = cube[19];
    cube[19] = cube[17];
    cube[17] = aux;

    aux = cube[20];
    cube[20] = cube[23];
    cube[23] = cube[21];
    cube[21] = cube[18];
    cube[18] = aux;

    aux = cube[16];
    cube[16] = cube[43];
    cube[43] = cube[25];
    cube[25] = cube[6];
    cube[6] = aux;

    aux = cube[13];
    cube[13] = cube[42];
    cube[42] = cube[28];
    cube[28] = cube[7];
    cube[7] = aux;

    aux = cube[11];
    cube[11] = cube[41];
    cube[41] = cube[30];
    cube[30] = cube[8];
    cube[8] = aux;
}

void front_reverse() {
    int aux;

    // Inverter as trocas na função 'front'
    aux = cube[17];
    cube[17] = cube[19];
    cube[19] = cube[24];
    cube[24] = cube[22];
    cube[22] = aux;

    aux = cube[18];
    cube[18] = cube[21];
    cube[21] = cube[23];
    cube[23] = cube[20];
    cube[20] = aux;

    aux = cube[16];
    cube[16] = cube[6];
    cube[6] = cube[25];
    cube[25] = cube[43];
    cube[43] = aux;

    aux = cube[13];
    cube[13] = cube[7];
    cube[7] = cube[28];
    cube[28] = cube[42];
    cube[42] = aux;

    aux = cube[11];
    cube[11] = cube[8];
    cube[8] = cube[30];
    cube[30] = cube[41];
    cube[41] = aux;
}

void left() {
    int aux;

    // Troca (9, 11, 16, 14)
    aux = cube[14];
    cube[14] = cube[16];
    cube[16] = cube[11];
    cube[11] = cube[9];
    cube[9] = aux;

    // Troca (10, 13, 15, 12)
    aux = cube[12];
    cube[12] = cube[15];
    cube[15] = cube[13];
    cube[13] = cube[10];
    cube[10] = aux;

    // Troca (1, 17, 41, 40)
    aux = cube[40];
    cube[40] = cube[41];
    cube[41] = cube[17];
    cube[17] = cube[1];
    cube[1] = aux;

    // Troca (4, 20, 44, 37)
    aux = cube[37];
    cube[37] = cube[44];
    cube[44] = cube[20];
    cube[20] = cube[4];
    cube[4] = aux;

    // Troca (6, 22, 46, 35)
    aux = cube[35];
    cube[35] = cube[46];
    cube[46] = cube[22];
    cube[22] = cube[6];
    cube[6] = aux;
}

void left_reverse() {
    int aux;

    // Inverter as trocas na função 'left'
    aux = cube[9];
    cube[9] = cube[11];
    cube[11] = cube[16];
    cube[16] = cube[14];
    cube[14] = aux;

    aux = cube[10];
    cube[10] = cube[13];
    cube[13] = cube[15];
    cube[15] = cube[12];
    cube[12] = aux;

    aux = cube[1];
    cube[1] = cube[17];
    cube[17] = cube[41];
    cube[41] = cube[40];
    cube[40] = aux;

    aux = cube[4];
    cube[4] = cube[20];
    cube[20] = cube[44];
    cube[44] = cube[37];
    cube[37] = aux;

    aux = cube[6];
    cube[6] = cube[22];
    cube[22] = cube[46];
    cube[46] = cube[35];
    cube[35] = aux;
}

void top() {
    int aux;

    // Troca (1, 3, 8, 6)
    aux = cube[6];
    cube[6] = cube[8];
    cube[8] = cube[3];
    cube[3] = cube[1];
    cube[1] = aux;

    // Troca (2, 5, 7, 4)
    aux = cube[4];
    cube[4] = cube[7];
    cube[7] = cube[5];
    cube[5] = cube[2];
    cube[2] = aux;

    // Troca (9, 33, 25, 17)
    aux = cube[17];
    cube[17] = cube[25];
    cube[25] = cube[33];
    cube[33] = cube[9];
    cube[9] = aux;

    // Troca (10, 34, 26, 18)
    aux = cube[18];
    cube[18] = cube[26];
    cube[26] = cube[34];
    cube[34] = cube[10];
    cube[10] = aux;

    // Troca (11, 35, 27, 19)
    aux = cube[19];
    cube[19] = cube[27];
    cube[27] = cube[35];
    cube[35] = cube[11];
    cube[11] = aux;
}

void top_reverse() {
    int aux;

    // Inverter as trocas na função 'top'
    aux = cube[1];
    cube[1] = cube[3];
    cube[3] = cube[8];
    cube[8] = cube[6];
    cube[6] = aux;

    aux = cube[2];
    cube[2] = cube[5];
    cube[5] = cube[7];
    cube[7] = cube[4];
    cube[4] = aux;

    aux = cube[9];
    cube[9] = cube[33];
    cube[33] = cube[25];
    cube[25] = cube[17];
    cube[17] = aux;

    aux = cube[10];
    cube[10] = cube[34];
    cube[34] = cube[26];
    cube[26] = cube[18];
    cube[18] = aux;

    aux = cube[11];
    cube[11] = cube[35];
    cube[35] = cube[27];
    cube[27] = cube[19];
    cube[19] = aux;
}

void right() {
    int aux;

    // Troca (25, 27, 32, 30)
    aux = cube[30];
    cube[30] = cube[32];
    cube[32] = cube[27];
    cube[27] = cube[25];
    cube[25] = aux;

    // Troca (26, 29, 31, 28)
    aux = cube[28];
    cube[28] = cube[31];
    cube[31] = cube[29];
    cube[29] = cube[26];
    cube[26] = aux;

    // Troca (3, 38, 43, 19)
    aux = cube[19];
    cube[19] = cube[43];
    cube[43] = cube[38];
    cube[38] = cube[3];
    cube[3] = aux;

    // Troca (5, 36, 45, 21)
    aux = cube[21];
    cube[21] = cube[45];
    cube[45] = cube[36];
    cube[36] = cube[5];
    cube[5] = aux;

    // Troca (8, 33, 48, 24)
    aux = cube[24];
    cube[24] = cube[48];
    cube[48] = cube[33];
    cube[33] = cube[8];
    cube[8] = aux;
}

void right_reverse() {
    int aux;

    // Inverter as trocas na função 'right'
    aux = cube[25];
    cube[25] = cube[27];
    cube[27] = cube[32];
    cube[32] = cube[30];
    cube[30] = aux;

    aux = cube[26];
    cube[26] = cube[29];
    cube[29] = cube[31];
    cube[31] = cube[28];
    cube[28] = aux;

    aux = cube[3];
    cube[3] = cube[38];
    cube[38] = cube[43];
    cube[43] = cube[19];
    cube[19] = aux;

    aux = cube[5];
    cube[5] = cube[36];
    cube[36] = cube[45];
    cube[45] = cube[21];
    cube[21] = aux;

    aux = cube[8];
    cube[8] = cube[33];
    cube[33] = cube[48];
    cube[48] = cube[24];
    cube[24] = aux;
}

void rear() {
    int aux;

    // Troca (33, 35, 40, 38)
    aux = cube[38];
    cube[38] = cube[40];
    cube[40] = cube[35];
    cube[35] = cube[33];
    cube[33] = aux;

    // Troca (34, 37, 39, 36)
    aux = cube[36];
    cube[36] = cube[39];
    cube[39] = cube[37];
    cube[37] = cube[34];
    cube[34] = aux;

    // Troca (3, 9, 46, 32)
    aux = cube[32];
    cube[32] = cube[46];
    cube[46] = cube[9];
    cube[9] = cube[3];
    cube[3] = aux;

    // Troca (2, 12, 47, 29)
    aux = cube[29];
    cube[29] = cube[47];
    cube[47] = cube[12];
    cube[12] = cube[2];
    cube[2] = aux;

    // Troca (1, 14, 48, 27)
    aux = cube[27];
    cube[27] = cube[48];
    cube[48] = cube[14];
    cube[14] = cube[1];
    cube[1] = aux;
}

void rear_reverse() {
    int aux;

    // Inverter as trocas na função 'rear'
    aux = cube[33];
    cube[33] = cube[35];
    cube[35] = cube[40];
    cube[40] = cube[38];
    cube[38] = aux;

    aux = cube[34];
    cube[34] = cube[37];
    cube[37] = cube[39];
    cube[39] = cube[36];
    cube[36] = aux;

    aux = cube[3];
    cube[3] = cube[9];
    cube[9] = cube[46];
    cube[46] = cube[32];
    cube[32] = aux;

    aux = cube[2];
    cube[2] = cube[12];
    cube[12] = cube[47];
    cube[47] = cube[29];
    cube[29] = aux;

    aux = cube[1];
    cube[1] = cube[14];
    cube[14] = cube[48];
    cube[48] = cube[27];
    cube[27] = aux;
}

void bottom() {
    int aux;

    // Troca (41, 43, 48, 46)
    aux = cube[46];
    cube[46] = cube[48];
    cube[48] = cube[43];
    cube[43] = cube[41];
    cube[41] = aux;

    // Troca (42, 45, 47, 44)
    aux = cube[44];
    cube[44] = cube[47];
    cube[47] = cube[45];
    cube[45] = cube[42];
    cube[42] = aux;

    // Troca (14, 22, 30, 38)
    aux = cube[38];
    cube[38] = cube[30];
    cube[30] = cube[22];
    cube[22] = cube[14];
    cube[14] = aux;

    // Troca (15, 23, 31, 39)
    aux = cube[39];
    cube[39] = cube[31];
    cube[31] = cube[23];
    cube[23] = cube[15];
    cube[15] = aux;

    // Troca (16, 24, 32, 40)
    aux = cube[40];
    cube[40] = cube[32];
    cube[32] = cube[24];
    cube[24] = cube[16];
    cube[16] = aux;
}

void bottom_reverse() {
    int aux;

    // Inverter as trocas na função 'bottom'
    aux = cube[41];
    cube[41] = cube[43];
    cube[43] = cube[48];
    cube[48] = cube[46];
    cube[46] = aux;

    aux = cube[42];
    cube[42] = cube[45];
    cube[45] = cube[47];
    cube[47] = cube[44];
    cube[44] = aux;

    aux = cube[14];
    cube[14] = cube[22];
    cube[22] = cube[30];
    cube[30] = cube[38];
    cube[38] = aux;

    aux = cube[15];
    cube[15] = cube[23];
    cube[23] = cube[31];
    cube[31] = cube[39];
    cube[39] = aux;

    aux = cube[16];
    cube[16] = cube[24];
    cube[24] = cube[32];
    cube[32] = cube[40];
    cube[40] = aux;
}

int main() {
    string s;
    while (cin >> s) {
        int cnt = 0;
        bool original;
        
        for (int i = 1; i <= 48; i++) {
            cube[i] = i;
            original_cube[i] = i;
        }

        while (1) {
            cnt++;
            original = true;
            for (int i = 0; i < s.size(); i++) {
                char c = s[i];

                // F front
                // R right
                // L left
                // D bottom
                // U top
                // B rear
                switch (c) {
                    case 'F':
                        front();
                        break;
                    case 'f':
                        front_reverse();
                        break;
                    case 'R':
                        right();
                        break;
                    case 'r':
                        right_reverse();
                        break;
                    case 'L':
                        left();
                        break;
                    case 'l':
                        left_reverse();
                        break;
                    case 'U':
                        top();
                        break;
                    case 'u':
                        top_reverse();
                        break;
                    case 'D':
                        bottom();
                        break;
                    case 'd':
                        bottom_reverse();
                        break;
                    case 'B':
                        rear();
                        break;
                    case 'b':
                        rear_reverse();
                        break;
                }

            }

            for (int i = 1; i <= 48; i++) {
                if (original_cube[i] != cube[i]) {
                    original = false;
                    break;
                }
            }

            if (original) break;
        }

        cout << cnt << endl;

    }

    return 0;
}