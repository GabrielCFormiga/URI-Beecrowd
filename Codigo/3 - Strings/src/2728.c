#include <stdio.h>
#include <string.h>

int main() {
    char ar[51];
    
    while(scanf("%s", ar) != EOF) {
        int pos[4] = {0}; // - - - -
        int len = strlen(ar);
        
        int j = 0;
        for(int i = 0; i < len; i++) {
            if(ar[i] == '-') {
                pos[j] = i;
                j++;
            }
        }
        
        int bug = 0;
        // verifica c
        if(ar[0] != 'c' && ar[0] != 'C' && ar[pos[0] - 1] != 'c' && ar[pos[0] - 1] != 'C') bug = 1;
        // verifica o
        if(ar[pos[0] + 1] != 'o' && ar[pos[0] + 1] != 'O' && ar[pos[1] - 1] != 'o' && ar[pos[1] - 1] != 'O') bug = 1;
        // verifica b
        if(ar[pos[1] + 1] != 'b' && ar[pos[1] + 1] != 'B' && ar[pos[2] - 1] != 'b' && ar[pos[2] - 1] != 'B') bug = 1;
        // verifica o
        if(ar[pos[2] + 1] != 'o' && ar[pos[2] + 1] != 'O' && ar[pos[3] - 1] != 'o' && ar[pos[3] - 1] != 'O') bug = 1;
        // verufica l
        if(ar[pos[3] + 1] != 'l' && ar[pos[3] + 1] != 'L' && ar[len - 1] != 'l' && ar[len - 1] != 'L') bug = 1;
        
        if(bug) printf("BUG\n");
        else printf("GRACE HOPPER\n");
    }
    
    return 0;
}