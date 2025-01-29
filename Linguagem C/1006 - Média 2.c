#include <stdio.h>

double media(double X, double Y, double Z);
 
int main() {
 
    double A, B, C, Media;
    
    scanf("%lf %lf %lf", &A, &B, &C);
    
    Media = media(A, B, C);
    
    printf("MEDIA = %.1lf\n", Media);
 
    return 0;
}

double media(double X, double Y, double Z){
    
    return (X*2 + Y*3 + Z*5)/10;
}
