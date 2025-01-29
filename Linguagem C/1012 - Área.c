#include <stdio.h>
 
int main() {
 
    double A, B, C;
    double TRI = 0, CIR = 0, TRA = 0, QUA = 0, RET = 0;
    
    scanf ("%lf", &A);
    scanf ("%lf", &B);
    scanf ("%lf", &C);
    
    TRI = A*C/2;
    CIR = 3.14159 * C * C;
    TRA = (A + B) * C / 2;
    QUA = B * B;
    RET = A * B;
    
    printf ("TRIANGULO: %.3lf\n", TRI);
    printf ("CIRCULO: %.3lf\n", CIR);
    printf ("TRAPEZIO: %.3lf\n", TRA);
    printf ("QUADRADO: %.3lf\n", QUA);
    printf ("RETANGULO: %.3lf\n", RET);
    
    return 0;
}
