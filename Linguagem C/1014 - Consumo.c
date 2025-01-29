#include <stdio.h>
 
int main() {
 
    int Kms;
    double Litros, Total = 0;
    
    scanf ("%i", &Kms);
    scanf ("%lf", &Litros);
    
    Total = Kms / Litros;
    
    printf ("%.3lf km/l\n", Total);
 
    return 0;
}
