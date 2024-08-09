#include <stdio.h>

int main(){
    unsigned long long int a, b , c, total = 0;
    char myChar;

    scanf("%llu %llu %llu%*c", &a, &b, &c);
    scanf("%c", &myChar);

    if(myChar == 'A'){
        total = a + (long double)3*b/2 + (long double)5*c/2;
        printf("%llu\n", total);
    } else if(myChar == 'B'){
        total = b + (long double)2*a/3 + (long double)5*c/3;
        printf("%llu\n", total);
    } else {
        total = c + (long double)2*a/5 + (long double)3*b/5;
        printf("%llu\n", total);
    }

    return 0;
}