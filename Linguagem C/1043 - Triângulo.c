#include <stdio.h>
 
int main() {
 
    double A, B, C, Perimetro, Area;
    
    scanf("%lf", &A);
    scanf("%lf", &B);
    scanf("%lf", &C);
    
    if (A < B + C && B < A + C && C < A + B){
        Perimetro = A + B + C;
        printf("Perimetro = %.1lf\n", Perimetro);
    }
    else{
        Area = ((A + B)*C)/2;
        printf("Area = %.1lf\n", Area);
    }
 
    return 0;
}
