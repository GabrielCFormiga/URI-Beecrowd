#include <stdio.h>
#include <math.h>
#define PI 3.14159
#define G 9.80665 

int main(){
    double h, speed, angle, hitPoint, delta;
    int p1, p2, tries;

    while(scanf("%lf %d %d %d", &h, &p1, &p2, &tries) != EOF){
        while (tries--){
            scanf("%lf %lf", &angle, &speed);
            angle = (angle*PI)/180;

            
            if (angle <= PI/2){
                delta = (sin(angle)/cos(angle))*(sin(angle)/cos(angle)) + 2*G*h*(1 + (sin(angle)/cos(angle))*(sin(angle)/cos(angle)))/(speed*speed);
                hitPoint = ((sin(angle)/cos(angle)) + sqrt(delta))/(G*(1 + (sin(angle)/cos(angle))*(sin(angle)/cos(angle)))/(speed*speed));
                
                if (hitPoint >= p1 && hitPoint <= p2){
                    printf("%.5lf -> DUCK\n", hitPoint);       
                } else {
                    printf("%.5lf -> NUCK\n", hitPoint);
                }
            } else {
                delta = (sin(angle)/cos(angle))*(sin(angle)/cos(angle)) + 2*G*h*(1 + (sin(angle)/cos(angle))*(sin(angle)/cos(angle)))/(speed*speed);
                hitPoint = ((sin(angle)/cos(angle)) - sqrt(delta))/(G*(1 + (sin(angle)/cos(angle))*(sin(angle)/cos(angle)))/(speed*speed));
                
                if (hitPoint >= p1 && hitPoint <= p2){
                    printf("%.5lf -> DUCK\n", hitPoint);       
                } else {
                    printf("%.5lf -> NUCK\n", hitPoint);
                }
            }
        }
    }
    
    return 0;
}