#include <stdio.h>
#include <math.h>
 
double DistanciaDoisPontos(int x0, int y0, int x, int y);

int main() {
    int cases, balls, x, y, x0, y0, posMenor;
    double distancia, distanciaMenor;
    
    scanf("%d", &cases);
    while(cases--){
        scanf("%d", &balls);
        scanf("%d%d", &x0, &y0);

        for(int i = 1; i <= balls; i++){
            scanf("%d%d", &x, &y);
            distancia = DistanciaDoisPontos(x0, y0, x, y);
            
            if (i == 1 || distanciaMenor > distancia){
                distanciaMenor = distancia;
                posMenor = i;    
            }
            
        }

        printf("%d\n", posMenor);
    }

    return 0;
}

double DistanciaDoisPontos(int x0, int y0, int x, int y){
    int distanciaDoisPontos = (x0 - x)*(x0 - x) + (y0 - y)*(y0 - y);
    return sqrt(distanciaDoisPontos);
}

