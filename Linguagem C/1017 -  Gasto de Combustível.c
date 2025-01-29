#include <stdio.h>
 
int main() {
 
    int Horas, Velo;
    double Litros, Dis;
    
    scanf ("%i", &Horas);
    scanf ("%i", &Velo);
    
    Dis = Horas * Velo;
    
    Litros = Dis/12;
    
    printf ("%.3lf\n", Litros);
 
    return 0;
}
