#include <stdio.h>
 
int main(){
    long long unsigned int a, b, sum;

    scanf("%llu %llu", &a, &b);
    if (a > b){
        sum = ((a + b)/2)*(a - b + 1);
    } else {
        sum = ((a + b)/2)*(b - a + 1);
    }

    printf("%llu\n", sum);
   
    return 0;
}