#include <stdio.h>
#include<math.h>
 
int main() {
 
    double A, B, C, Delta, R1, R2;
    
    scanf ("%lf", &A);
    scanf ("%lf", &B);
    scanf ("%lf", &C);
    
    Delta = B*B - 4*A*C;
    
    if (A == 0) {
        printf("Impossivel calcular\n");
    } else if (Delta < 0) {
        printf("Impossivel calcular\n");
    }
    else{
        
        R1 = (-B + sqrt(Delta))/(2*A);
        R2 = (-B - sqrt(Delta))/(2*A);
        
        printf ("R1 = %.5lf\n", R1);
        printf ("R2 = %.5lf\n", R2);
    }
    
 
    return 0;
}
